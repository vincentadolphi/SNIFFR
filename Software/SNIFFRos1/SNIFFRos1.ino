//SNIFFRos v1


//CONSTANTS----------
int RED_LED = 9;
int GREEN_LED = 10;
int BLUE_LED = 11;
int DELAY = 300;
int sensorValue;
int THRESHOLD1 = 60;
int THRESHOLD2 = 80;
//-------------------


void setup()
{
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(0);
  Serial.println(sensorValue, DEC);
  if (sensorValue < THRESHOLD1) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BLUE_LED, LOW);
  }
  if (sensorValue > THRESHOLD1 && sensorValue < THRESHOLD2) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BLUE_LED, LOW);
  }
  if (sensorValue > THRESHOLD2) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BLUE_LED, LOW);
  }
  delay(DELAY);
}

//by SNIFFRos v1 by STUDIO IKG
