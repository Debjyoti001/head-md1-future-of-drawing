#define PIEZO 4
#define LED 12
#define PIN 2

int potPin = PIN;
int lum= 15;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode (PIEZO, OUTPUT);
pinMode (LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int potValue = analogRead(potPin);
  int delayTime = map(potValue, 0, 4095, 0, 1000);
  digitalWrite(LED, HIGH);
  digitalWrite(PIEZO, HIGH);
  delay(100);  // Adjust this value if needed for the desired on time
  digitalWrite(LED, LOW);
  digitalWrite(PIEZO, LOW);
  delay(delayTime);
Serial.println(potValue);
}
