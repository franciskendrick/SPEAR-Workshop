// Define pins
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

void setup() {
  // Set LED pins as output
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(50);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(50);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(50);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(50);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(50);
  digitalWrite(led5, LOW);
  delay(250)
}
