
// With an interval <= 14, the light appears still
const int INTERVAL = 12;
const int OUTPUT_PIN = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(INTERVAL);
  digitalWrite(OUTPUT_PIN, LOW);
  delay(INTERVAL);
}
