// Define pin numbers for the traffic light LEDs
const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;

void setup() {
  // Initialize the LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Red light (Stop)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(3000); // Red light for 3 seconds

  // Red and yellow lights (Prepare to go)
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000); // Red and yellow lights for 1 second

  // Green light (Go)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(3000); // Green light for 3 seconds

  // Yellow light (Caution)
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000); // Yellow light for 1 second
}
