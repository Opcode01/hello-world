#define redLedpin 11
#define greenLedpin 10
#define blueLedpin 9

#define redSwitchpin 7
#define greenSwitchpin 6
#define blueSwitchpin 5

int red = 0;
int blue = 0;
int green = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLedpin, OUTPUT);
  pinMode(greenLedpin, OUTPUT);
  pinMode(blueLedpin, OUTPUT);

  pinMode(redSwitchpin, INPUT_PULLUP);
  pinMode(greenSwitchpin, INPUT_PULLUP);
  pinMode(blueSwitchpin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

    if(digitalRead(redSwitchpin) == LOW)
    {
      red++;
      if(red > 255)
        red = 0;
        Serial.println("RED IS: ");
        Serial.println(red);
    }
    if(digitalRead(greenSwitchpin) == LOW)
    {
      green++;
      if(green > 255)
        green = 0;
      Serial.println("GREEN IS: ");
      Serial.println(green);
    }
    if(digitalRead(blueSwitchpin) == LOW)
    {
      blue++;
      if(blue > 255)
        blue = 0;
      Serial.println("BLUE IS: ");
      Serial.println(blue);
    }
  analogWrite(redLedpin,red);
  analogWrite(greenLedpin, green);
  analogWrite(blueLedpin, blue);
  delay(10);
    
}
