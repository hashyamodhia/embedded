byte buff[4] = {1,2,3,4};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write(55);         // Send the byte with value 55
  Serial.write(buff, 4);    // Send the contents of the buffer
  delay(2000);
  Serial.println(buff[0]);
  Serial.println(buff[1]);
  Serial.println(buff[2]);
  Serial.println(buff[3]);
  while (true) {
    // You may want to add some other functionality here or remove the infinite loop
  }
}
