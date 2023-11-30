
//code for clicking button for varying light intensity settings

#define BUTTON_PIN 12
#define LED 13
float lum= 15;//brightness 0 and 20

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_PIN, INPUT_PULLUP);
pinMode(LED, OUTPUT);
}

void loop() {

boolean btnDown= !digitalRead(BUTTON_PIN);


if (btnDown){

  lum= lum +0.1;
  if (lum>20){
    lum=0;
  }
}



//Control LED
  
digitalWrite(LED,HIGH);
delay(lum);
digitalWrite(LED,LOW);
delay(20-lum);
}
