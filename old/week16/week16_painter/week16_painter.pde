//Ctrl-N 再開一個新的程式
//想做一個小畫家,要有不同的筆觸、色彩!
void setup() {
  size(300, 300);
  background(#FFFFF2);  //改到上面來
}

void draw() {
  // 如果沒有清背景,就會有殘影
  // rect(mouseX, mouseY, 100, 100);
  if(mousePressed) { //如果mouse按下去時
    line(mouseX, mouseY, pmouseX, pmouseY);
  } //就畫線, 你的mouse位置, 之前mouse的位置
}

void keyPressed(){
  if( key == '1' ) stroke(255, 0, 0);  // 按 '1' 紅色
  if( key == '2' ) stroke(0, 255, 0);  // 按 '2' 綠色
}
