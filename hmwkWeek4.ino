int sensorPin = A0;
int analogValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){
    ; //Wait for serial port to connect. Prevents further lines from executing until Serial port is setup
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(sensorPin)/4;
  Serial.write(analogValue);
  delay(10);


}
