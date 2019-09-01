#include <Keyboard.h>
//-----------------------------------------|
/*
 * 
 * DESENVOLVEDOR: HÉLTER SARDEIRO DE SOUZA
 * DATA: 02/08/2019
 *
 */
//-----------------------------------------|
//START DEFINES
#define btn1 2
#define btn2 3
#define btn3 4
#define btn4 5
#define btn5 6
#define btn6 7
#define btn7 8
#define btn8 9
//END DEFINES
//-----------------------------------------|
//START FUNCTIONS
  void Esc(){
    Keyboard.press(KEY_ESC);
    Keyboard.release(KEY_ESC);
  }

  void F2(){
    Keyboard.press(KEY_F2);
    Keyboard.release(KEY_F2);
  }
  void F3(){
    Keyboard.press(KEY_F3);
    Keyboard.release(KEY_F3);
  }
  void F4(){
    Keyboard.press(KEY_F4);
    Keyboard.release(KEY_F4);
  }
  void F5(){
    Keyboard.press(KEY_F5);
    Keyboard.release(KEY_F5);
  }
  void F6(){
    Keyboard.press(KEY_F6);
    Keyboard.release(KEY_F6);
  }
  void F7(){
    Keyboard.press(KEY_F7);
    Keyboard.release(KEY_F7);
  }
  void CtrlAltF6(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F6);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(KEY_F6);
  }
  void CtrlB(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('B');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('B');
  }
  void CtrlC(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('C');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('C');
  }
  void ShiftCtrlF(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('F');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('F');
  }
  void ShiftCtrlG(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('G');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('G');
  }
  void ShiftCtrlH(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('H');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('H');
  }
  void ShiftCtrlI(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('I');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('I');
  }
  void ShiftCtrlJ(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('J');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('J');
  }
  void ShiftCtrlK(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('K');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('K');
  }
  void CtrlR(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('R');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('R');
  }
  void CtrlAltR(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('R');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release('R');
  }
  void ShiftCtrlR(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('R');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('R');
  }
  void CtrlT(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('T');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('T');
  }  
  void T(){
    Keyboard.press('T');
    Keyboard.release('T');
  }
  void CtrlW(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('W');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('W');
  }
  void W(){
    Keyboard.press('W');
    Keyboard.release('W');
  }
  void A(){
    Keyboard.press('A');
    Keyboard.release('A');
  }
  void X(){
    Keyboard.press('X');
    Keyboard.release('X');
  } 
  void Ctrl1(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(1);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(1);
  }
  void Ctrl2(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(2);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(2);
  }
  void Ctrl3(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(3);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(3);
  } 
  void Ctrl4(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(4);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(4);
  } 
  void Ctrl5(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(5);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(5);
  } 
  void Ctrl6(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(6);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(6);
  } 
  void Ctrl7(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(7);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(7);
  } 
  void Ctrl8(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(8);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(8);
  } 
  void Ctrl9(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(9);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(9);
  }
  void CtrlAlt1(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(1);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(1);
  }
  void CtrlAlt2(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(2);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(2);
  }
  void CtrlAlt3(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(3);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(3);
  }
  void CtrlAlt4(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(4);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(4);
  }
  void CtrlAlt5(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(5);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(5);
  }
  void CtrlAlt6(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(6);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(6);
  }
  void CtrlAlt7(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(7);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(7);
  }
  void CtrlAlt8(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(8);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(8);
  }
  void ShiftCtrl1(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(1);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(1);
  }
  void ShiftCtrl2(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(2);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(2);
  }
  void ShiftCtrl3(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(3);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(3);
  }
  void ShiftCtrl4(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(4);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(4);
  }
  void ShiftCtrl5(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(5);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(5);
  }
  void ShiftCtrl6(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(6);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(6);
  }
  void ShiftCtrl7(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(7);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(7);
  }
  void ShiftCtrl8(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(8);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(8);
  }
  void ShiftCtrl9(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(9);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(9);
  }
  void ShiftCtrlF1(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F1);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F1);
  }
  void ShiftCtrlF2(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F2);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F2);
  }
  void ShiftCtrlF3(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F3);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F3);
  }
  void ShiftCtrlF4(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F4);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F4);
  }
  void ShiftCtrlF5(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F5);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F5);
  }
  void ShiftCtrlF6(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F6);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F6);
  }
  void ShiftCtrlF7(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F7);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F7);
  }
  void ShiftCtrlF8(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F8);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F8);
  }
  void ShiftCtrlF9(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_F9);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_F9);
  }
  void ShiftCtrlN(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('N');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('N');
  }
  void ShiftCtrlP(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('P');
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('P');
  }
  void ShiftCursorLeft(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_LEFT_ARROW);
  }
  void ShiftCursorRight(){
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_LEFT_SHIFT);
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  void CtrlCursorLeft(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_LEFT_ARROW);
  }
  void CtrlCursorRight(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  void CtrlCursorUp(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_UP_ARROW);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_UP_ARROW);
  }
  void CtrlCursorDown(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_DOWN_ARROW);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release(KEY_DOWN_ARROW);
  }
  void Mais(){
    Keyboard.press('+');
    Keyboard.release('+');
  }
  void Menos(){
    Keyboard.press('-');
    Keyboard.release('-');
  }
  void PageUp(){
    Keyboard.press(KEY_PAGE_UP);
    Keyboard.release(KEY_PAGE_UP);
  }
  void PageDown(){
    Keyboard.press(KEY_PAGE_DOWN);
    Keyboard.release(KEY_PAGE_DOWN);
  }
  void B(){
    Keyboard.press('B');
    Keyboard.release('B');
  }
  void CtrlV(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('V');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('V');
  }
  void CtrlP(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('P');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('P');
  }
  void CtrlS(){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('S');
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('S');
  }
  void End(){
    Keyboard.press(KEY_END);
    Keyboard.release(KEY_END);
  }




//END FUNCTIONS

void setup() {
  Keyboard.begin();
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);
  pinMode(btn5, INPUT_PULLUP);
  pinMode(btn6, INPUT_PULLUP);
  pinMode(btn7, INPUT_PULLUP);
  pinMode(btn8, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(btn1) == LOW){
     CtrlC();
  }
  if(digitalRead(btn2) == LOW){
    ShiftCtrlF1();
  }
  if(digitalRead(btn3) == LOW){
    CtrlV();
  }
  if(digitalRead(btn4) == LOW){
    ShiftCtrlF3();
  }
  if(digitalRead(btn5) == LOW){
    ShiftCtrlF4();
  }
  if(digitalRead(btn6) == LOW){
    ShiftCtrlF5();
  }
  if(digitalRead(btn7) == LOW){
    ShiftCtrlF6();
  }
  if(digitalRead(btn8) == LOW){
    ShiftCtrlF7();
  }
  delay(150);
}

//START COMMANDS
/*
Esc - exit full screen photobooth mode and return to the Webcam Photobooth startup screen

F2 - switch to B&W mode and start the photobooth sequence

F3 - switch to color mode and start the photobooth sequence

F4 - start the photobooth sequence using the current B&W or color setting

F5 - same as F4

F6 - reactivate live view and display ready.jpg screen if previously canceled or cancel live view and display welcome.jpg screen if live view currently active

Ctrl+Alt+F6 - switch from standby to ready mode

Ctrl+B - switch to B&W mode but don't start the photobooth sequence

Ctrl+C - switch to color mode but don't start the photobooth sequence

Shift+Ctrl+F - select "Instagram" style filter 1

Shift+Ctrl+G - select "Instagram" style filter 2

Shift+Ctrl+H - select "Instagram" style filter 3

Shift+Ctrl+I - select "Instagram" style filter 4

Shift+Ctrl+J - select "Instagram" style filter 5

Shift+Ctrl+K - select "Instagram" style filter 6

Ctrl+R - reprint the last set of photos without displaying the touchscreen keyboard or print confirmation screens

Ctrl+Alt+R - reprint the last set of photos with touchscreen keyboard and print confirmation screens if enabled

Shift+Ctrl+R - fast reprint of the last set of photos (if output option is set to "Print and save JPEG copy")

Ctrl+T - switch to tinted B&W

T - switch to tinted B&W mode and start the photobooth sequence

Ctrl+W - toggle between B&W and color modes

W - cycle through color, B&W and B&W (toned) modes

A - Accept print when print confirmation window is displayed

X - Reject print when print confirmation window is displayed

Ctrl+1 - select one copy of prints

Ctrl+2 - select two copies of prints

Ctrl+3 - select three copies of prints

Ctrl+4 - select four copies of prints

Ctrl+5 - select five copies of prints

Ctrl+6 - select six copies of prints

Ctrl+7 - select seven copies of prints

Ctrl+8 - select eight copies of prints

Ctrl+9 - select nine copies of prints

Ctrl+Alt+1 - select profile 1 and start shooting sequence

Ctrl+Alt+2 - select profile 2 and start shooting sequence

Ctrl+Alt+3 - select profile 3 and start shooting sequence

Ctrl+Alt+4 - select profile 4 and start shooting sequence

Ctrl+Alt+5 - select profile 5 and start shooting sequence

Ctrl+Alt+6 - select profile 6 and start shooting sequence

Ctrl+Alt+7 - select profile 7 and start shooting sequence

Ctrl+Alt+8 - select profile 8 and start shooting sequence

Shift+Ctrl+1 - select profile 1

Shift+Ctrl+2 - select profile 2

Shift+Ctrl+3 - select profile 3

Shift+Ctrl+4 - select profile 4

Shift+Ctrl+5 - select profile 5

Shift+Ctrl+6 - select profile 6

Shift+Ctrl+7 - select profile 7

Shift+Ctrl+8 - select profile 8

Shift+Ctrl+9 - select profile 9

Shift+Ctrl+F1 - select profile 10

Shift+Ctrl+F2 - select profile 11

Shift+Ctrl+F3 - select profile 12

Shift+Ctrl+F4 - select profile 13

Shift+Ctrl+F5 - select profile 14

Shift+Ctrl+F6 - select profile 15

Shift+Ctrl+F7 - select profile 16

Shift+Ctrl+F8 - select profile 17

Shift+Ctrl+F9 - select profile 18

Shift+Ctrl+N - select next profile

Shift+Ctrl+P - select previous profile

Shift+CursorLeft - crop live view display (reduce the amount of cropping)

Shift+CursorRight - crop live view display (increase the amount of cropping)

Ctrl+CursorLeft/CursorRight - adjust the hue of the tint applied to monochrome images when the tinted option is selected

Ctrl+CursorUp/CursorDown - adjust the saturation of the tint applied to monochrome images when the tinted option is selected

Number pad '+' - increase the number copies of prints (up to a maximum of 9 copies)

Number pad '-' - decrease the number copies of prints (down to a minimum of 1 copy)

PageDown - increase the number copies of prints (up to a maximum of 9 copies)

PageUp - decrease the number copies of prints (down to a minimum of 1 copy)

B - reprint the last set of photos

 

Video booth keyboard shortcuts:

Ctrl+V - switch from stills photobooth mode to video booth mode

Ctrl+P - switch from video booth mode to stills photobooth mode

Ctrl+S - toggle between video and stills photobooth modes and back again

F4 - start video booth capture sequence in video booth mode or photobooth shooting sequence in stills mode

F5 - start video booth capture sequence

F7 - switch to video booth mode and start the video booth capture sequence

End - end the video recording now rather than wait for the full duration

A - accept the video and switch from the playback screen to the ready screen

P - play video from the start when in displaying the playback screen

X - reject the video, delete it from the computer and switch from the playback screen to the ready screen
*/
//END COMMANDS
