#include <Keyboard.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  delay(100);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  while (1) {}
}
