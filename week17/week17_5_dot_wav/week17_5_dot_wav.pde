import processing.sound.*;
SoundFile sound;
//這個程式,在打字時,會播放聲音 達達達
void setup(){
  size(200,200);
  sound = new SoundFile(this, "dot.wav");
}

void draw(){
  if(keyPressed) background(255,0,0);
  else background(#FFFFF2);
}
void keyPressed(){
  sound.play();
}
