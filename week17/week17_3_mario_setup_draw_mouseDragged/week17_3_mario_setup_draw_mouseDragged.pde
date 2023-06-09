//要有互動,把兩張圖片拉近來
PImage mario, princess;
void setup(){
  size(600,600);
  mario = loadImage("mario.png");
  princess = loadImage("princess.jpg");
}
void draw(){
  background(255);//白色的背景
  image(mario, 0, 80, 250,300);//適當的大小,不要太肥
  image(princess, x, y); //位置
}
float x = 300, y = 0; //位置
void mouseDragged(){
  x += (mouseX-pmouseX); //會調整位置
  y += (mouseY-pmouseY); //會調整位置
}
