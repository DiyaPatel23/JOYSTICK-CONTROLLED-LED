int xPin = A0;
int yPin = A1;
int sPin = 2;
int xVal;
int yVal;
int sVal;
int dt =3000;
int Count;
int redPin = 10;
int greenPin = 11;
int bluePin = 12;
int redIntensity;
int blueIntensity;
int greenIntensity;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
pinMode(sPin,INPUT);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
digitalWrite(sPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal=analogRead(xPin);
yVal=analogRead(yPin);
sVal=digitalRead(sPin);
Serial.print("x value = ");
Serial.print(xVal);
Serial.print("y value = ");
Serial.print(yVal);
Serial.print("s value = ");
Serial.print(sVal);
delay(dt);
if(digitalRead(sPin)==0){
  Count=Count+1;}
Serial.print("Count value = ");
Serial.println(Count);

  redIntensity = map(analogRead(xPin),0,1023,0,255);
  analogWrite(redPin,redIntensity);

  greenIntensity = map(analogRead(yPin),0,1023,0,255);
  analogWrite(greenPin,greenIntensity);



}
