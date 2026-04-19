int sensorPin = A1;

int yellowLed = 6;
int greenLed = 7;
int redLed = 8;
int buzzer = 9;

int baseline = 110;
int threshold = baseline + 80; 

void setup() {
  Serial.begin(9600);

  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.println("MQ-2 gotowy...");
}

void loop() {
  int value = analogRead(sensorPin);

  Serial.print("MQ-2: ");
  Serial.println(value);

  if (value > threshold) {
    // 🔴
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(buzzer, HIGH);
}

    else if (value > baseline + 30) {
    // 🟡 
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(buzzer, LOW);

  } else {
    // 🟢
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}
