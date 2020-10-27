void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write("hello");  //send the string "hello" and return the length of the string.
  delay(1000);
}

