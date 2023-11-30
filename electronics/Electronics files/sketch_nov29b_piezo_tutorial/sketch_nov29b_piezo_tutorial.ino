#define PIEZO 4
#define LED 12
#define PIN 14


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode (PIEZO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int potValue = analogRead(potPin);
  int delayTime = map(potValue, 0, 4095, 50, 1000);
  digitalWrite(LED, HIGH);
  digitalWrite()
  delay(100);  // Adjust this value if needed for the desired on time
  digitalWrite(LED, LOW);
  delay(delayTime);
Serial.println(potValue);
}
