
// With an interval <= 14, the light appears still
const int INTERVAL = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(INTERVAL);
  digitalWrite(13, LOW);
  delay(INTERVAL);
}
