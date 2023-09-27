int led_pin1 = 13;
int led_pin2 = 12;
int blink_duration1 = 1000;

void setup(){
  pinMode(led_pin1, OUTPUT); // Set pin 13 as an output
  pinMode(led_pin2, OUTPUT); // Set pin 12 as an output
}

void loop() {
  digitalWrite(led_pin1, HIGH); // Turn on the LED connected to pin 13
  delay(blink_duration1);
  digitalWrite(led_pin1, LOW); // Turn off the LED
  delay(blink_duration1);

  digitalWrite(led_pin2, HIGH); // Turn on the LED connected to pin 12
  delay(blink_duration1);
  digitalWrite(led_pin2, LOW); // Turn off the LED
  delay(blink_duration1);
}

