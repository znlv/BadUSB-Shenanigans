#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print("powershell");
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(1000);
  Keyboard.print("Start-Process \"https://youtu.be/dQw4w9WgXcQ\" -WindowStyle Minimized");
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print("notepad");
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(1000);
  Keyboard.print("You've been Rickrolled!\nNever gonna give you up...");
  delay(500);
  Keyboard.print("\nThis shii is made by @znlv (valq)");

  Keyboard.end();
}

void loop() {
  // nope
}
