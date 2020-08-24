#define RED_LED 5
#define YELLO_LED 6
#define BLUE_LED 11

void setup() {
  // put your setup code here, to run once:
  pinMode(BLUE_LED, OUTPUT);
  pinMode(YELLO_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<256; i++) {
    analogWrite(BLUE_LED, i);
    analogWrite(YELLO_LED, i);
    analogWrite(RED_LED, i);
    delay(10);
  }
  delay(500);
}
