//SNIFFRos v1


//CONSTANTS----------
int RED = 9;
int GREEN = 10;
int BLUE = 11;
int DELAY = 300;
int sensorValue;
int THRESHOLD1 = 60;
int THRESHOLD2 = 80;
//-------------------


void setup()
{
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(0);
  Serial.println(sensorValue, DEC);
  if (sensorValue < THRESHOLD1) {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
  }
  if (sensorValue > THRESHOLD1 && sensorValue < THRESHOLD2) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
  }
  if (sensorValue > THRESHOLD2) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
  }
  delay(DELAY);
}

//by SNIFFRos v1 by STUDIO IKG
