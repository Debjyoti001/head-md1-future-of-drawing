#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define SDA 13 //Define SDA pins
#define SCL 14 //Define SCL pins

#define PIN 2 //potentiometer pin
int potPin = PIN;

LiquidCrystal_I2C lcd(0x27,16,2); 

void setup() {

//other setups
  Serial.begin(9600);
//pinMode (LED, OUTPUT);

//LCD setup
 Wire.begin(SDA, SCL); // attach the IIC pin
 if (!i2CAddrTest(0x27)) {
 lcd = LiquidCrystal_I2C(0x3F, 16, 2);
 }
 lcd.init(); // LCD driver initialization
 lcd.backlight(); // Open the backlight
 lcd.setCursor(0,0); // Move the cursor to row 0, column 0
 lcd.print("POTENTIOMETER"); // The print content is displayed on the LCD
}

void loop() {

//Potentiometer value rrading
 int potValue = analogRead(potPin);
  //int delayTime = map(potValue, 0, 4095, 0, 1000);

 lcd.setCursor(0,1); // Move the cursor to row 1, column 0
 lcd.print("Power:"); // The count is displayed every second
 lcd.print(potValue/40.95);
 delay(300);
}

bool i2CAddrTest(uint8_t addr) {
 Wire.begin();
 Wire.beginTransmission(addr);
 if (Wire.endTransmission() == 0) {
 return true;
 }
 return false;
}