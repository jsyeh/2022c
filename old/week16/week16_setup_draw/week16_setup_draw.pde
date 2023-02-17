//Ctrl-N 開新的檔案,來寫新的程式
void setup() {  // 設定 專用的函式
  size(300, 300);
}

void draw() {  // 畫圖 專用的函式, 每秒畫60次
  background(#FFFFF2);
  rect(mouseX, mouseY, 100, 100);
}
