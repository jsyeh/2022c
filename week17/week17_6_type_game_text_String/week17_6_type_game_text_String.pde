import processing.sound.*;
SoundFile sound;
//這個程式,在打字時,會播放聲音 達達達
void setup(){
  size(800,400);
  sound = new SoundFile(this, "dot.wav");
}
String line = "type: "; //字串
void draw(){
  background(#FFFFF2);
  fill(0);
  textSize(30);
  text(line, 50,50);
}
void keyPressed(){
  sound.play();
  line += key; //字串會變長。但是特殊鍵會變亂碼
}
