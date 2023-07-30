
// With an interval <= 14, the light appears still
const int INTERVAL = 250;
const int DIFF = 50;
const int OUTPUT_ONE = 13;
const int OUTPUT_TWO = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT_ONE, OUTPUT);
  pinMode(OUTPUT_TWO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(OUTPUT_ONE, HIGH);
  delay(INTERVAL);
  digitalWrite(OUTPUT_ONE, LOW);
  delay(INTERVAL);
  digitalWrite(OUTPUT_ONE, HIGH);
  delay(INTERVAL);
  digitalWrite(OUTPUT_ONE, LOW);
  delay(INTERVAL + DIFF);
  digitalWrite(OUTPUT_TWO, HIGH);
  digitalWrite(OUTPUT_ONE, LOW);
  delay(INTERVAL + DIFF);
  digitalWrite(OUTPUT_TWO, LOW);
  delay(INTERVAL);
}