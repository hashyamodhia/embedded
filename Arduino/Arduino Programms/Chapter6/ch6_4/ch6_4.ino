const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8}; // Adjust these pin numbers based on your setup
const int numSegments = 7; // Number of segments in the display

// Array to store the patterns for each number (0-9) for a common cathode display
const byte numbers[10][numSegments] = {
  {0, 0, 0, 0, 0, 0, 1}, // 0
  {1, 0, 0, 1, 1, 1, 1}, // 1
  {0, 0, 1, 0, 0, 1, 0}, // 2
  {0, 0, 0, 0, 1, 1, 0}, // 3
  {1, 0, 0, 1, 1, 0, 0}, // 4
  {0, 1, 0, 0, 1, 0, 0}, // 5
  {0, 1, 0, 0, 0, 0, 0}, // 6
  {0, 0, 0, 1, 1, 1, 1}, // 7
  {0, 0, 0, 0, 0, 0, 0}, // 8
  {0, 0, 0, 0, 1, 0, 0}  // 9
};

void setup() {
  for (int i = 0; i < numSegments; i++) {
    pinMode(segmentPins[i], OUTPUT); // Set the segment pins as OUTPUT
    digitalWrite(segmentPins[i], HIGH); // Turn off all segments initially for common cathode
  }
}

void displayNumber(int number) {
  if (number >= 0 && number <= 9) {
    for (int i = 0; i < numSegments; i++) {
      digitalWrite(segmentPins[i], numbers[number][i]); // Display the segments for the given number
    }
  }
}

void clearDisplay() {
  for (int i = 0; i < numSegments; i++) {
    digitalWrite(segmentPins[i], HIGH); // Turn off all segments for common cathode
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000); // Display each number for one second
    clearDisplay(); // Clear the display before showing the next number
  }
}
