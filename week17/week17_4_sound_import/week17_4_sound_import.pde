//音樂比較難解決,因為不同的作業系統、平台,作法都不同
//統一的方法, 要另外匯入 Processing Sound Library
//Sketch-Library-Manage Libararies, 找 sound, 安裝它
//安裝好後, File-Examples, 最下面, 有 SimplePlayback
//點兩下, 可以模仿
import processing.sound.*;
int a;
PImage img;
SoundFile sound; //小心大小寫
void setup(){
  size(200,200);           //檔案要偷來用,「檔案要拉進來」
  sound = new SoundFile(this, "vibraphon.aiff");
  sound.loop();
}
void draw(){
  
}
