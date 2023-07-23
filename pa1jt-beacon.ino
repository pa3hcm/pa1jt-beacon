// PA1JT BEACON - 2023-07-23
// (c) 2023 Ernest Neijenhuis PA3HCM

int dottime = 80; // length of a dot in ms
int i;

void setup() {
  pinMode(13, OUTPUT); // CW output on pin 13, key down = HIGH
}

void loop() {
  delay(1000);
  dit(); dah(); dah(); dit(); delay(dottime*3);         // P
  dit(); dah(); delay(dottime*3);                       // A
  dit(); dah(); dah(); dah(); dah(); delay(dottime*3);  // 1
  dit(); dah(); dah(); dah(); delay(dottime*3);         // J
  dah(); delay(dottime*3);                              // T
  delay(dottime*4);
  dah(); dit(); dit(); dit(); delay(dottime*3);         // B
  dit(); delay(dottime*3);                              // E
  dit(); dah(); delay(dottime*3);                       // A
  dah(); dit(); dah(); dit(); delay(dottime*3);         // C
  dah(); dah(); dah(); delay(dottime*3);                // O
  dah(); dit(); delay(dottime*3);                       // N
  delay(dottime*4);
  keydown();
  delay(1000);
}

void dit() {
  digitalWrite(13, HIGH);
  delay(dottime);
  digitalWrite(13, LOW);
  delay(dottime);
}

void dah() {
  digitalWrite(13, HIGH);
  delay(3 * dottime);
  digitalWrite(13, LOW);
  delay(dottime);
}

void keydown() {
  digitalWrite(13, HIGH);
  delay(10000);
  digitalWrite(13, LOW);
  delay(dottime);
}