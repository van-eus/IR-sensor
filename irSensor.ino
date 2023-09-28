const int irPin = A0;  // Analog input pin for IR sensor
const int referenceValue = 500;  // Reference analog value at the desired distance
const int led1 = 6;
void setup() {
  pinMode(irPin, INPUT);  // Set IR sensor pin as input
   pinMode(led1,OUTPUT);
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(irPin);  // Read the analog value from IR sensor

  if (sensorValue > referenceValue) {
     digitalWrite(led1,HIGH);
       Serial.print("Analog Value: ");
  Serial.println(sensorValue);     

  } else {
      digitalWrite(led1,LOW);
  Serial.print("Analog Value: ");
  Serial.println(sensorValue);
  }
delay(500);
}
