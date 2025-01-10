#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22

#define SWITCH1 15
#define SWITCH2 2
#define SWITCH3 34
#define SWITCH4 35
#define SWITCH5 32
#define SWITCH6 33

#define L1 23
#define L2 19
#define L3 18
#define L4 5
#define L5 17
#define L6 16
#define L7 4
#define L8 0

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD address 0x27, 16 chars, 2 lines

int currentMenu = 0; // Current menu
unsigned long lastToggleTime = 0; // Time for LED toggle
bool ledState = false; // LED state for blinking

void setup() {
  // Initialize I2C
  Wire.begin(I2C_SDA, I2C_SCL);

  // Initialize LCD
  lcd.init();
  lcd.backlight();

  // Set pin modes for switches and LEDs
  pinMode(SWITCH1, INPUT);
  pinMode(SWITCH2, INPUT);
  pinMode(SWITCH3, INPUT);
  pinMode(SWITCH4, INPUT);
  pinMode(SWITCH5, INPUT);
  pinMode(SWITCH6, INPUT);

  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);

  lcd.setCursor(3, 0);
  lcd.print("Select Menu");
}

void clearLEDs() {
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);
  digitalWrite(L5, LOW);
  digitalWrite(L6, LOW);
  digitalWrite(L7, LOW);
  digitalWrite(L8, LOW);
}

void loop() {
  if (digitalRead(SWITCH1) == HIGH) {
    if (currentMenu != 1) {
      currentMenu = 1;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 1");
    }
    digitalWrite(L1, HIGH);
    digitalWrite(L2, HIGH);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, HIGH);
    digitalWrite(L5, HIGH);
    digitalWrite(L6, HIGH);
    digitalWrite(L7, HIGH);
    digitalWrite(L8, HIGH);
  } else if (digitalRead(SWITCH2) == HIGH) {
    if (currentMenu != 2) {
      currentMenu = 2;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 2");
    }
    unsigned long currentTime = millis();
    if (currentTime - lastToggleTime > 500) {
      lastToggleTime = currentTime;
      ledState = !ledState;
      digitalWrite(L1, ledState);
      digitalWrite(L2, !ledState);
      digitalWrite(L3, ledState);
      digitalWrite(L4, !ledState);
      digitalWrite(L5, ledState);
      digitalWrite(L6, !ledState);
      digitalWrite(L7, ledState);
      digitalWrite(L8, !ledState);
    }
  } else if (digitalRead(SWITCH3) == HIGH) {
    if (currentMenu != 3) {
      currentMenu = 3;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 3");
    }
    digitalWrite(L1,HIGH);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,HIGH);
     delay(730);







    
  } else if (digitalRead(SWITCH4) == HIGH) {
    if (currentMenu != 4) {
      currentMenu = 4;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 4");
    }
     digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,HIGH);
     delay(730);
     digitalWrite(L1,HIGH);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,HIGH);
     delay(730);

  } else if (digitalRead(SWITCH5) == HIGH) {
    if (currentMenu != 5) {
      currentMenu = 5;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 5");
    }
     digitalWrite(L1,HIGH);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,HIGH);
     delay(730);

     //กลับ


      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,HIGH);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
      digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
      digitalWrite(L1,HIGH);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730);

  } else if (digitalRead(SWITCH6) == HIGH) {
    if (currentMenu != 6) {
      currentMenu = 6;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("MENU 6");
    }
     digitalWrite(L1,HIGH);
     digitalWrite(L2,HIGH);
     digitalWrite(L3,HIGH);
     digitalWrite(L4,HIGH);
     digitalWrite(L5,HIGH);
     digitalWrite(L6,HIGH);
     digitalWrite(L7,HIGH);
     digitalWrite(L8,HIGH);
     delay(730); 
     digitalWrite(L1,LOW);
     digitalWrite(L2,LOW);
     digitalWrite(L3,LOW);
     digitalWrite(L4,LOW);
     digitalWrite(L5,LOW);
     digitalWrite(L6,LOW);
     digitalWrite(L7,LOW);
     digitalWrite(L8,LOW);
     delay(730); 
     
     
     
      } else {
    if (currentMenu != 0) {
      currentMenu = 0;
      lcd.clear();
      lcd.setCursor(3, 0);
      lcd.print("Select Menu");
      clearLEDs();
    }
  }
}
