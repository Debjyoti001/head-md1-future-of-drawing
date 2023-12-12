//potentiometer tutorial
#define PIN 14
#define LED 12
//#define BUTTON_PIN 

int potPin = PIN;
int lum= 15;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED, OUTPUT);
}

void loop() {
 int potValue = analogRead(potPin);
  int delayTime = map(potValue, 0, 4095, 50, 1000);
  digitalWrite(LED, HIGH);
  delay(100);  // Adjust this value if needed for the desired on time
  digitalWrite(LED, LOW);
  delay(delayTime);
Serial.println(potValue);
}
