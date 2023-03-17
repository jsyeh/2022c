# 2022c
資傳一甲 程式設計 的程式倉庫

# old 目錄 
上學期「程式設計一」的上課的程式

以下則是下學期的上課程式

# Week01
程式設計二 Week01 2023-02-17

0. What學什麼? Why為何學? How如何學?
1. 主題: 情人節的愛心 vs. 史上最多2的一天 (最有愛的日子)
2. 複習: scanf()讀入整數、字元、字串
3. 複習: if(判斷) for(迴圈) 配合陣列
4. 複習: 字串函式
5. 實作: 最多2的一天 (下週考試)
6. 進階: ~~UVA401 Palindromes (迴文)~~

## step01-1_介紹上課內容、利用Processing畫出情人節的愛心,複習程式設計的基礎,像是函式、分號、if判斷、for迴圈、運算等。用 Processing 畫出可愛的愛心

```processing
//File-SaveAs 存成 week01_1_heart 
//公式 (x*x+y*y-1)^3 - x*x*y*y*y < 0 裡面
size(400, 400);  // 視窗大小
fill(255, 0, 0);  // 紅色
noStroke();  // 不要用外框的stroke
//ellipse(200, 200, 100, 150);  //先試橢圓
for(int i=0; i<400; i++){  //左手i 對應 y座標
  for(int j=0; j<400; j++){//右手j 對應 x座標
    //要把 大的座標 j,i 換成數學 -2~+2的x,y
    // 0...400 減200 變 -200..+200 再除100.0 -2..+2
    float x = (j-200)/100.0;
    float y = -(i-200)/100.0;  //y要改成負的
    if( (x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1) - x*x*y*y*y < 0){
      ellipse( j, i, 2, 2 );
    }
  }
}
```

## step02-1_用CodeBlocks 寫 week01-2.cpp 讀入字元、整數,並熟悉scanf()

```cpp
///Week01-2.cpp step02-1_要scanf()讀入資料
#include <stdio.h>
int main()
{///先讀入字母, 再讀入整數 (如果反過來,可能會讀到Enter鍵)
    printf("請輸入字母: ");
    char c;
    scanf("%c", &c);
    printf("你輸入 %c\n", c);

    printf("請輸入整數: ");
    int a;
    scanf("%d", &a);
    printf("你輸入 %d\n", a);
}
```

## step02-2_有了scanf()讀整數、字元的基礎後, 我們再看字元陣列,也就是字串的版本, 使用 %s 而且宣告的 char line[40]; 對應的scanf()裡不用加&符號

```cpp
///Week01-3.cpp step02-2 字串 (很多字母)
#include <stdio.h>
int main()
{
    printf("請輸入字串: ");

    char c; ///這行只是示範,不用寫啦
    char line[40]; ///字串
    scanf("%s", line); ///不能加&
    ///會被空格、TAB、Enter斷開

    printf("你讀入了: %s\n", line);

}
```

## step02-3_了解字串之後,我們在瘋狂程設,試著先針對一行來比對2有幾個,有用到for迴圈及if判斷,同時了解 == 比大小, 字元用單引號, for配陣列,逐一比對。迴圈前面int ans=0; 迴圈中間 ans++; 迴圈後面 ans印出來。

```cpp
///Week01-4.cpp step02-3
#include <stdio.h>
#include <string.h> ///for strlen()
int main()
{


	char line[40]; ///字串,就是字元陣列
	scanf("%s", line);

	//printf("\n%s\n", line);

	int ans=0;
	int N = strlen(line);
	for(int i=0; i<N; i++){ ///陣列配迴圈
		if( line[i] == '2' ) ans++;
	}        ///小心 == 天平比大小, 不能寫 = 設值
	//printf("\n%s\n", line);
	printf("%d\n", ans);
}
```

## step03-1_要把全部的程式寫出來。很多行,不知道幾行, 要用 while迴圈 裡面用神奇的 while(   scanf(...)==1 ){ 如果成功讀到1筆資料,就分析&印出。有了前面step02-3的基礎,我們再加上大的while迴圈, 配合 scanf()==1 的技巧,確認成功讀入1筆資料後,逐行處理。要印Total的話, 就迴圈前面 int total=0; 迴圈中間 total += ans; 迴圈後面total印出來

```cpp
///Week01-5.cpp step03-1
#include <stdio.h>
#include <string.h> //for strlen()
int main()
{

	char line[40]; //字串,就是字元陣列
	int total=0;
	while( scanf("%s", line)==1 ){
//如果scanf()成功讀入1筆資料, 就持續做
		int ans=0;
		int N = strlen(line);
		for(int i=0; i<N; i++){ //陣列配迴圈
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}
```

## step03-2_請將今天的程式, 利用 Git 備份到 GitHub 上

要使用上學期的 github.com/你的帳號/2022c

- 0. 安裝 Git 軟體
- 0.1. 在桌面葉正聖老師上課軟體, 點 20次
- 0.2. GitHub 也記得登入
- 
- 1. 要開啟 Git Bash 小黑, 進入目錄, clone下來, 開資料夾
- 1.1. cd desktop 進入桌面
- 1.2. git clone https://github.com/帳號/2022c   (只能做一次)
- 1.3. cd 2022c
- 1.4. start .
- 
- 2. 在檔案總管整理你的舊資料, 加入新資料
- 2.1. 把上學期的, 都移到 old 的子目錄中
- 2.2. 開 week01 放你的程式碼(用複製的,才不會壞掉)
- 
- 3. Git 加入你的帳冊
- 3.1. git status  (紅色)
- 3.2. git add .    (要小心空格. 小心句點)
- 3.3. git status  (綠色)
- 
- 4. Git 認可、確認你的修改, 要附上你的訊息
- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. git config --global user.name jsyeh
- 4.0. 如果沒有做上面2行, 就會問你 who you are 不讓你確認
- 4.1. git commit -m "修改目錄、新增Week01"
- 
- 5. Git 推送上雲端
- 5.1. 登入 Chome 的 GitHub
- 5.2. git push





# Week02
程式設計二 2023-02-24 Week02
1. 考試：史上最多2的一天
2. 複習 scanf 及 while迴圈，以「勇敢的戰士」為例
3. 迴文 Palindrome 與迴圈
4. 變數宣告、作業問題、實習問題
5. 同學問的問題（防毒軟體、繳譯、測資、截圖）（暱名）
6. 五大困擾：英文看不懂、看懂題目不知道要做什麼、知道要做什麼卻不會寫、知道怎麼寫卻找不出問題


1. step01-1_請試著寫勇敢的戰士這題,在瘋狂程設-CPE顆星廣場-一顆星-UVA10055 Hashmat the brave warrior 的題目。英文題目看不懂, 就先不要看。看數字後,可能就先有靈感,寫寫看, 簡單測資中, 右邊大、左邊小, 所以 int ans = b - a; 即可。配合 while迴圈, 印出來好像是對的 (還沒寫完)。請在瘋狂程設裡, 用簡單測資執行, 截圖week02-1.png上傳,  程式在 CodeBlocks存成 week02-1.cpp

2. step01-2_因為題目可能會遇到負的, 所以就加上一個if(判斷)來解決ans為負的問題。請先在測資(測試資料Test Data)裡, 加一筆左邊大右邊小的數字, 請在瘋狂程設裡執行這樣的測資, 截圖week02-2.png上傳,  程式在 CodeBlocks存成 week02-2.cpp

3. step02-1_這個題目要正確, 必須解決「很長很長的整數」的問題。請在瘋狂程設裡, 截圖week02-3.png上傳,  程式在 CodeBlocks存成 week02-3.cpp

4. step02-2_這學期要把C語言教完, 再多教一點點C++,所以今天就把C++的輸入、輸出介紹一下。首先 #include 的不是 stdio.h 而是 iostream (沒有.h哦), 接下來是不用管型別, 直接用大於大於>>來轉送到變數裡, 要輸出時, 使用 << 來轉出去。請在瘋狂程設裡, 截圖week02-4.png上傳,  程式在 CodeBlocks存成 week02-4.cpp

5. step02-3_一直有重覆的 std:: 取用命名空間, 有點麻煩, 所以可以在最前面寫一行 using namespace std; 來使用 std:: 這個命名空間, 則 後面就可簡寫 cin 和 cout 和 endl。請在瘋狂程設裡, 截圖week02-5.png上傳,  程式在 CodeBlocks存成 week02-5.cpp

6. step03-1_請將今天的程式, 利用 Git 備份到 GitHub 上, 再上傳截圖證明

## step00-0_上課之前,有同學問實習課的題目,簡單的題目,卻想要用高級while迴圈配 scanf()試試
有人問大小寫轉換

```cpp
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c;
	while( scanf("%c", &c)==1 ){
		if( islower(c) ) c = toupper(c);
		else if( isupper(c) ) c = tolower(c);
		printf("%c", c);
	}
}
```

## step01-0_今天考試題目「最多2的一天」, 老師在考前再複習一次, 並在考後講解同學出錯的幾個地方。

```cpp
#include <stdio.h>
int main()
{
	char line[40];

	int total = 0;//Step05 total
	
	//Step04 while loop with scanf() == ??
	while( scanf("%s", line)==1 ){  //Step01 one Input OK
	
		int ans = 0;
		for(int i=0; line[i]!=0 ; i++){ //Step02 string loop
			if( line[i]=='2' ) ans++; //Step03 ans
		}
		printf("%d\n", ans); //Step03 ans
		total += ans; //Step05 total
	}	
	printf("Total: %d\n", total); //Step05 total
}
```

## step01-1_請試著寫勇敢的戰士這題,在瘋狂程設-CPE顆星廣場-一顆星-UVA10055 Hashmat the brave warrior 的題目。英文題目看不懂, 就先不要看。看數字後,可能就先有靈感,寫寫看, 簡單測資中, 右邊大、左邊小, 所以 int ans = b - a; 即可。配合 while迴圈, 印出來好像是對的 (還沒寫完)。請在瘋狂程設裡, 用簡單測資執行
```cpp
///Week02-1.cpp step01-1 while + scanf() ==2
#include <stdio.h>

int main()
{
	int a, b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		if(a>b) ans = a-b;
		if(b>a) ans = b-a;
		printf("%d\n", ans);
	}
}
```

## step01-2_解決正負號的問題, 利用if判斷來處理
```cpp
///Week02-2.cpp step01-2 if() to compare big and small
//10 12
//10 14
//100 200
//300 400
//500 300
#include <stdio.h>

int main()
{
	int a, b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		if(ans<0) ans = a - b;
		//if(a>b) ans = a-b;
		//if(b>a) ans = b-a;
		printf("%d\n", ans);
	}
}
```

## step02-1_講解long long int 的歷史故事, Intel vs. AMD 的 32 64位元之爭的結果 與相容性的考量。最後是%lld的讀法,及scanf()回傳值的意思
```cpp
//Week02-1.cpp step01-1 while + scanf() ==2
#include <stdio.h>

int main()
{
	int a, b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		if(a>b) ans = a-b;
		if(b>a) ans = b-a;
		printf("%d\n", ans);
	}
}
/*
#include <stdio.h>
int main()
{
    ///32位元 進入 64位元, 發生 Intel AMD之爭
    ///x64 x86 程式可互相相容 (int用 32位元)
    ///42,9496,7296 42億
/// 很長很長的整數 改用 long long int
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    ///是 L L D 的小寫, 不是數字 1 1 D
    printf("%lld %lld\n", a, b);
}
*/

```

## step02-2_介紹C++課本的 std的 cin, cout, endl 與大於大於、小於小於的語法觀念

```cpp
//Week02-4.cpp step02-2 C++ 
#include <iostream> //#include <stdio.h>

int main()
{
	long long int a, b;
	
	while( std::cin >> a >> b ){
	//while( scanf("%lld%lld", &a, &b) == 2 ){
		long long int ans = a - b;
		if(ans<0) ans = b - a;
		//printf("%lld\n", ans);
		std::cout << ans << std::endl;
	}
}
```

## step02-3_介紹 using namespace std; 設定預設使用的命名空間namespace 讓我們後面在使用 cin cout時, 可以少打一些字
```cpp
///Week02-5.cpp step02-3 使用 namespace
#include <iostream>
using namespace std;
int main()
{
	long long int a, b;

	while( cin >> a >> b ){
		long long int ans = a - b;
		if(ans<0) ans = b - a;
		cout << ans << endl;
	}
}
```

## step03-1_介紹變數宣告的時機點、作業問題、實習題目遇到的問題等, 最後再示範Git上傳的方法
0. 安裝 Git, 開啟 Git Bash
0.1. 桌面的葉正聖老師資料夾裡
0.2. 要按2x下一步
0.3. 要開 Git Bash

1. Git Bash 進入桌面, 再 git 的 clone下來, 再進入 2022c
1.1. cd desktop
1.2. git clone https://github.com/帳號/2022c
1.3. cd 2022c

2. start . 可開啟檔案總管, 新增 week02, 請把今天的 5個程式放進來

3. 加入帳冊 用 git 的 add 來加, 不要忘了小數點。 配合 git 的 status 看色彩
3.1. git status
3.2. git add .
3.3. git status

4. 確認、認可你的修改, 用 git 的 commit 配合你的 commit message訊息 (小心, 4.0 要做哦)
4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
4.0. git config --global user.name jsyeh
4.0. 如果沒有設定, 會失敗, 問你 who you are 
4.1. git commit -m "第02週的程式"

5. 推送上雲端
5.1. git push
5.2. 會請你要用 Chrome登入 GitHub


# Week03
程式設計二 2023-03-03 Week03
1. 考試: 勇敢的戰士
2. 主題: 迴文 Palindrome
3. 主題: 全字母句 (整合字母、字串、陣列、迴圈)
4. 象棋

## step01-0_考試勇敢的戰士, 考前老師示範複習, 老師再講解同學出錯的地方。之前再講解今天想介紹有趣的象棋程式。

```cpp
#include <stdio.h>
int main()
{
	long long int a, b;

	while( scanf("%lld%lld", &a, &b) == 2){

		long long int ans = b - a;
		if( ans < 0 ) ans = a - b;
		printf("%lld\n", ans);

	}
}
```

```processing
// 2023-02-28 19:27 因等看診,臨時寫個象棋的程式
// 目前還沒有 Undo 及記棋譜的功能（都需要讀檔）

String nameB[] = {"", "將","士","象","車","馬","包","卒"};
String nameR[] = {"", "帥","仕","相","俥","傌","炮","兵"};

int board[][] = {
  {4, 0, 0, 7, 0, 0, -7,  0, 0, -4},
  {5, 0, 6, 0, 0, 0,  0, -6, 0, -5},
  {3, 0, 0, 7, 0, 0, -7,  0, 0, -3},
  {2, 0, 0, 0, 0, 0,  0,  0, 0, -2},
  {1, 0, 0, 7, 0, 0, -7,  0, 0, -1},
  {2, 0, 0, 0, 0, 0,  0,  0, 0, -2},
  {3, 0, 0, 7, 0, 0, -7,  0, 0, -3},
  {5, 0, 6, 0, 0, 0,  0, -6, 0, -5},
  {4, 0, 0, 7, 0, 0, -7,  0, 0, -4},
};

void setup(){
  fullScreen();
  print(width,height);
  for(String name : PFont.list()){
    println(name);
  }
  PFont font = createFont("標楷體", 50);
  textFont(font);
}

color cWood=#FADC79;
void draw(){
  background(cWood);
  stroke(0);
  strokeWeight(2);
  fill(cWood);
  for(int i=0; i<8; i++){
    for(int j=0; j<9; j++){
      /// 1440/9 = 96, 900/9 = 100
      rect( X(j), Y(i), 144, 100 );
    }
  }
  rect( X(4), Y(0), 144, 100*8 );
  line( X(0), Y(3), X(2), Y(5) );
  line( X(2), Y(3), X(0), Y(5) );
  line( X(7), Y(3), X(9), Y(5) );
  line( X(9), Y(3), X(7), Y(5) );
  for(int i=0; i<9; i++){
    for(int j=0; j<10; j++){
      if(selectedI!=i || selectedJ!=j){
        drawChess(board[i][j], i, j);
      }
    }
  }
  if(selectedI!=-1 && selectedJ!=-1){
    drawChessRaw(board[selectedI][selectedJ], mouseX, mouseY);
  }
}

int selectedI=-1, selectedJ=-1;

void mousePressed(){
  for(int i=0; i<9; i++){
    for(int j=0; j<10; j++){
      if(dist(mouseX, mouseY, X(j), Y(i))<40){
        selectedI = i;
        selectedJ = j;
      }
    }
  }
}

void mouseReleased(){
  for(int i=0; i<9; i++){
    for(int j=0; j<10; j++){
      if(dist(mouseX, mouseY, X(j), Y(i))<40){
        int id = board[selectedI][selectedJ];
        board[selectedI][selectedJ] = 0;
        board[i][j] = id;
        break;
      }
    }
  }
  selectedI = -1;
  selectedJ = -1;
}

void drawChessRaw(int id, int x, int y){
  if(id==0) return;
  fill(255);
  stroke(0);
  ellipse(x, y, 80, 80);
  textAlign(CENTER, CENTER);
  if(id<0){
    stroke(#FF0000);
    ellipse(x, y, 65, 65);
    fill(#FF0000);
    text(nameR[-id], x, y-6 );
  }else{
    stroke(0);
    ellipse(x, y, 65, 65);
    fill(0);
    text(nameB[id], x, y-6 );
  }

}

void drawChess(int id, int i, int j){
  drawChessRaw(id, X(j), Y(i));
}

int X(int j){
  return 72+144*j;
}

int Y(int i){
  return 50+100*i;
}
```

## step01-1_今天的主題又是字串的處理, 整合型的題目, 我們先試 CPE顆星廣場的UVA401的題目的前面幾步。先用scanf()來讀字串, 再用 while迴圈配合scanf()來讀入資料,並印出錯誤的答案

```cpp
//Week03-1 Palindrome (CPE顆星廣場-一顆星(難))
//step1: Input Ouput  scanf("%s", line)
//step2: while() + scanf() == 1
#include <stdio.h>
int main()
{
	char line[30];

	while( scanf("%s", line) == 1 ){

		printf("%s", line);

		printf(" -- is not a palindrome.\n\n");
	}
}
```

## step01-2_迴文Palindrome就是正讀、反讀都一樣。要判斷迴圈, 可以利用for迴圈,逐一比較字串裡面的字母, 正著讀用 line[i], 反著讀用 line[N-1-i], 如果出問題, 就記下來。字串的長度用第一週教的 strlen() 即可。

```cpp
///Week03-2 Palindrome (CPE顆星廣場-一顆星(難))
///step03 只解決迴文/回文,正讀、反讀,都一樣
/// for迴圈,前面到後面 vs. 後面到前面
#include <stdio.h>
#include <string.h> ///strlen()
int main()
{
	char line[30];

	scanf("%s", line);

	int N = strlen(line);
	int bad=0;
	for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad=1;
	}
	if(bad==1) printf("它不是迴文\n");
	else printf("它是迴文\n");
}
```

## step02-1_題目還有「鏡像字」的問題。有些字母左右看起來是一樣的。所以老師用最暴力的方法,有一堆if else 判斷連在一起,把程式都比對出來。

```cpp
///Week03-3.cpp step02-1 mirrored 鏡像字的函式
/// char mirrored_char(char c) 可把鏡像字傳出來
#include <stdio.h>
char mirrored_char(char c)
{
    if(c=='A') return 'A';
    else if(c=='E') return '3';
    else if(c=='H') return 'H';
    else if(c=='I') return 'I';
    else if(c=='J') return 'L';
    else if(c=='L') return 'J';
    else if(c=='M') return 'M';
    else if(c=='O') return 'O';
    else if(c=='S') return 'I';
    else if(c=='T') return 'T';
    else if(c=='U') return 'U';
    else if(c=='V') return 'V';
    else if(c=='W') return 'W';
    else if(c=='X') return 'X';
    else if(c=='Y') return 'Y';
    else if(c=='Z') return '5';
    else if(c=='1') return '1';
    else if(c=='2') return 'S';
    else if(c=='3') return 'E';
    else if(c=='5') return 'Z';
    else if(c=='8') return '8';
    else return ' ';
}
int main()
{

}
```

## step02-2_有了鏡像字母,便能判斷鏡像字串。也就是結合 step01-2 及 step02-1 的程式。不過 step02-1 的 if判斷太暴力了, 我們改用比較優雅的寫法, 去逐個比對字母(查表)再回覆鏡像字母是誰。最後, 用迴圈來看某個字串是不是鏡像字。

```cpp
///Week03-4.cpp step02-2 mirrored 鏡像字的函式 用字串+迴圈,簡化
/// char mirrored_char(char c) 可把鏡像字傳出來
#include <stdio.h>
#include <string.h>
char mirrored_char(char c)
{
    char line1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char line2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0; line1[i]!=0; i++){
        if(line1[i]==c) return line2[i];
    }
    return ' ';
}
int main()
{
    char line[30];
    scanf("%s", line);

    int N = strlen(line);
    int bad = 0;
    for(int i=0; i<N; i++){
        char c1 = line[i];
        char c2 = mirrored_char(line[N-1-i]);
        if(c1 != c2) bad = 1;
    }
    if(bad==0) printf("它是鏡像字\n");
    else printf("它不是鏡像字\n");
}
```

## step03-1_今天第一節課那個 UVA401 Palindromes 那題大魔王,表面上step01-1完成了8成, 其實只完成一部分。要再配合 step01-2, step02-1, step02-2 全部合在一起, 才能正確。這裡老師使用 testPalindrome() 與 testMirrored() 這兩個函式, 讓程式碼都控制在 10行以內, 讓思緒比較清楚。最後用4個if()來排列組合出全部的結果。

```cpp
///Week03-5 Palindrome (CPE顆星廣場-一顆星(難))
//step1: Input Ouput  scanf("%s", line)
//step2: while() + scanf() == 1
#include <stdio.h>
#include <string.h>
char mirrored_char(char c)
{
    char line1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char line2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0; line1[i]!=0; i++){
        if(line1[i]==c) return line2[i];
    }
    return ' ';
}
int testPalindrome(char line[30])
{
	int N = strlen(line);
	int bad=0;
	for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad=1;
	}
	if(bad==1) return 0;// printf("它不是迴文\n");
	else return 1;//printf("它是迴文\n");
}
int testMirrored(char line[30])
{
    int N = strlen(line);
    int bad = 0;
    for(int i=0; i<N; i++){
        char c1 = line[i];
        char c2 = mirrored_char(line[N-1-i]);
        if(c1 != c2) bad = 1;
    }
    if(bad==0) return 1;//printf("它是鏡像字\n");
    else return 0;//printf("它不是鏡像字\n");
}
int main()
{
	char line[30];

	while( scanf("%s", line) == 1 ){

		printf("%s", line);
		int p = testPalindrome(line); //use your function to test
		int m = testMirrored(line);   //use your function to test

		if(p==0 && m==0) printf(" -- is not a palindrome.\n\n");
		if(p==1 && m==0) printf(" -- is a regular palindrome.\n\n");
		if(p==0 && m==1) printf(" -- is a mirrored string.\n\n");
		if(p==1 && m==1) printf(" -- is a mirrored palindrome.\n\n");
	}
}
```

## step03-2

- 0. 安裝 Git, 開啟 Git Bash
- 1. 進入桌面 cd desktop 、再複製 git clone 你的倉庫連結 、再進入對應的目錄 cd 2022c
- 2. 使用 start  .  開啟檔案總管, 把今天的 week03 的 5個程式放好
- 3. 將今天的修改加入帳冊 git add . (可配合 git status 來看紅色、綠色)
- 4. 再認可、確認今天的修改 git commit -m "你要留的訊息"
- 4.0. 記得要 git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. 記得要 git config --global user.name jsyeh
- 4.1. git commit -m "add week03"
- 5. 推送上雲端 git push


# Week04
10 Week04
1. 考試：鏡像字
2. 主題：排序
3. 主題：指標
4. 主題：字串排序
5. Tell me the frequencies vs. 全字母句
6. 作業評分 & 實習題目

提醒作業有問題 or 缺課的同學
1. 關於 Git 指令, FB社團裡, 資傳一甲的影片, 從詳細, 變精簡。
2. 上課的錄影、截圖: Teams有完整3小時版(較模糊), 每週的小段的原始錄影截圖, FB社團裡比較精簡
3. 作業的排版格式、語法問題

## step01-0_考試「鏡像字」考前老師示範兩種寫法, 考後講解幾個同學出錯的地方

```cpp
#include <stdio.h>
int main()
{
	char c, ans;
	scanf("%c", &c);
	
	if(c=='A') ans = 'A';
	else if(c=='E') ans =  '3';
	else if(c=='H') ans =  'H';
	else if(c=='I') ans =  'I';
	else if(c=='J') ans =  'L';
	else if(c=='L') ans =  'J';
	else if(c=='M') ans =  'M';
	else if(c=='O') ans =  'O';
	else if(c=='S') ans =  '2';
	else if(c=='T') ans =  'T';
	else if(c=='U') ans =  'U';
	else if(c=='V') ans =  'V';
	else if(c=='W') ans =  'W';
	else if(c=='X') ans =  'X';
	else if(c=='Y') ans =  'Y';
	else if(c=='Z') ans =  '5';
	else if(c=='1') ans =  '1';
	else if(c=='2') ans =  'S';
	else if(c=='3') ans =  'E';
	else if(c=='5') ans =  'Z';
	else if(c=='8') ans =  '8';
	else ans =  ' ';
	
	printf("%c\n", ans);
}
```

另一種寫法

```cpp
#include <stdio.h>
int main()
{
	char table1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	char table2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	
	char c, ans=' ';
	scanf("%c", &c);
	
	for(int i=0; table1[i]!=0; i++){
		if(c==table1[i]) ans = table2[i];
	}

	printf("%c\n", ans);
}
```

## step01-1_本週主題是pointer指標, 在課本的第4章, 圖像的意思,是有個變數, 心裡放的值是位址、位址, 要寫它要去偷看哪裡。我們先了解變數的4個特質 int a = 10; 分別代表前3個性質(形狀、名字、值), &a 則代表第4個性質(它在哪裡、住址、位置), 請用 CodeBlocks 實作 week04-1.cpp 印出值及它們的位址, 執行截圖上傳 week04-1.png

```
變數variable的4個性質
 int a = 10;
 int 什麼型狀的盒子(1)
     a 什麼名字的盒子(2)
         10 放什麼值在裡面(3)
(4) &a 放哪裡(住址、位址)
    And聽起來和Address有點像
(偷看隔壁的女生用的!)
scanf("%d", &a); 可把鍵盤讀到的整數,放到a家裡
```


```cpp
///Week04-1.cpp step01-1 想要理解
///step01-1_本週主題是pointer指標,
///在課本的第4章, 圖像的意思,是有個變數, 心裡放的值是住址、位址, 要寫它要去偷看哪裡。
///我們先了解變數的4個特質 int a = 10; 分別代表前3個性質(形狀、名字、值),
///&a 則代表第4個性質(它在哪裡、住址、位置)
#include <stdio.h>
int main()
{
    int a = 10;
    printf("a的值是%d\n", a);
    printf("a的家在%d\n", &a);

    int b = 20;
    printf("b的值是%d\n", b);
    printf("b的家在%d\n", &b);

    int c = 30;
    printf("c的值是%d\n", c);
    printf("c的家在%d\n", &c);
}

```

## step02-1_課本介紹指標變數 pointer to int 寫法是 int *p = &a 裡面會放 a的位址。請用 C Tutor Python 執行, 再截圖 week04-2.png (程式碼則是存成 week04-2.cpp)

```cpp
///Week04-2.cpp step02-1 指標變數 pointer
#include <stdio.h>
int main()
{
    int a = 10;
    printf("a在哪裡? %d\n", &a);

    int *p = &a;

    printf("指標p心裡放的值是&a 也就是%d\n", p);
    printf("p指到的那一個盒子的值是:%d\n", *p );
}
```

## step02-2_接下來有2個指標的版本, int *p1 = &a; int *p2 = &b; 印出不同變數的值。再來 p1 = p2; 太誇張 p1 直接喜歡 p2 喜歡的女生, 結果 p1 p2 都指到同一個變數。請用 C Tutor Python 執行, 再截圖 week04-3.png (程式碼則是存成 week04-3.cpp)

```cpp
///Week04-3.cpp step02-2 指標變數 pointer
#include <stdio.h>
int main()
{
    int a = 10, b = 20;

    int * p1 = &a;
    int * p2 = &b;

    printf("p1指到的變數的值是 %d\n", *p1 );
    printf("p2指到的變數的值是 %d\n", *p2 );

    p1 = p2;
    printf("p1指到的變數的值是 %d\n", *p1 );
    printf("p2指到的變數的值是 %d\n", *p2 );

    p1 = &a;
    printf("p1指到的變數的值是 %d\n", *p1 );
    printf("p2指到的變數的值是 %d\n", *p2 );
}
```

## step02-3_指標變數很神奇, 除了可以偷看別人的值, 也可以偷改別人的值。就兩個步驟, 先在指標變數的心裡, 放另一個正常變數的&a 位置。再來, 使是使用 *p 當成是神奇的功能, 讓你直接操作那個正常的變數。我們讓兩個變數 p1 p2 都指到 &a, 接下來都能改變a的值。請用 C Tutor Python 執行, 再截圖 week04-4.png (程式碼則是存成 week04-4.cpp)

```cpp
///Week04-4.cpp step02-3
///要改它的值
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p1, *p2; ///合在一起的宣告法 都要打星星
    printf("a:%d b:%d\n", a, b);

    p1 = &a;
    *p1 = 99;  ///step02-3 也可以改指到的東西哦
    printf("a:%d b:%d\n", a, b);

    p2 = p1;
    *p2 = 77;
    printf("a:%d b:%d\n", a, b);
}
```


## step03-1_下週考試題目是「全字母句」合英文文法的句子,裡面用了26個字母。比較簡單好記的一個句子是 The quick brown fox jumps over a lazy dog 解題策略是用 for迴圈、while迴圈、陣列, 來逐一檢查、填進對應的陣列裡, 最後再用for迴圈來看是不是都有填值。請用 CodeBlocks實作 week04-5.cpp 用小黑執行時, 輸入全字母句的英文, 結束輸入時按 Ctrl-Z 便會跑出答案。截圖上傳 week04-5.png

```cpp
///考試題目是 全字母句 解題策略: for, while, 陣列
///The quick brown fox jumps over a lazy dog
#include <stdio.h>
int main()
{
    int used[26]={0,0,0,0}; ///陣列宣告, 沒寫齊全的話,都會補0
    ///used[0] 對應 'A'
    ///used[1] 對應 'B'
    ///used[25] 對應 'Z'
    char c;
    while( scanf("%c", &c) == 1 ){
        if(c>='A' && c<='Z'){
            int i = c - 'A';
            used[i] ++;
        }
        if(c>='a' && c<='z'){
            int i = c - 'a';
            used[i] ++;
        }
    }
    int bad=0; ///一開始還沒壞掉
    for(int i=0; i<26; i++){
        if( used[i]==0 ) bad=1; ///有字母沒用到? 死掉了
    }
    if(bad==0) printf("Yes");
    else printf("No");
}
```
## step03-2_請將今天的程式, 利用 Git 備份到 GitHub 上, 再上傳截圖 week04-5.png 證明


- 0. 安裝 Git 開啟 Git Bash
- 1. 進桌面 cd desktop 複製倉庫 git clone https網址 再進入cd 2022c
- 2. 開檔案總管 start . 整理目錄
- 3. 加入 git add .
- 4. 確認 git commit -m week04  (記得要先config好)
- 5. 推送 git push


# Week05

## step01-0_考試「全字母句」考前示範幾種寫法, 考後講解同學遇到的問題

```cpp
#include <stdio.h>

//int used[26]; //all zero

int main()
{
	int used[26] = {}; //bad value inside, so...
	
	char c;
	while( scanf("%c", &c) == 1 ){
		if(c>='A' && c<='Z') used[ c-'A' ]++;
		if(c>='a' && c<='z') used[ c-'a' ]++;
	}
	
	int bad=0;
	for(int i=0; i<26; i++){
		if(used[i]==0) bad++;
	}
	
	if(bad==0) printf("Yes");
	else printf("No");

}
```

## step01-1_今天上課的第一個重點是指標、陣列, 講解「指標就是陣列」、「陣列就是指標」的觀念。請用 CodeBlocks實作week05-1.cpp, 看到指標、陣列, 都拿來當陣列使用。

```cpp
///Week05-1.cpp step01-1
///指標,就是陣列。陣列,就是指標。
#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int * p = a;
    for(int i=0; i<10; i++){
        printf("a[i]:%d -- p[i]:%d\n", a[i], p[i]);
    }
}
```


## step02-1_老師帶家寫 LeetCode的第9題, 是Easy題。判斷迴圈。因為這題有一些陷阱, 所以我們逐一解決問題。題目裡沒有 main()函式, 所以如果要debug時, 要在 CodeBlocks裡, 補上 main()函式。但在LeetCode這題只要寫完 bool isPalindrome(int x) 函式就行了。要先把負數解決, 再使用剝皮法, 要小心 x會被剝光光, 所以要有分身 int x2 = x; 備份值, 以便 if(r==x2) 確認。另外因為1234567899 這種很長的數字反過來時會超過int所以要用 long long int r=0;

https://leetcode.com/problems/palindrome-number

在 CodeBlocks 執行的程式
```cpp
//Week05-2.cpp step02-1
#include <stdio.h> //不用寫main()因為題目裡偷放
bool isPalindrome(int x){
    if(x<0) return false;

    //x:1234567   r:0
    //        7     7 = 0*10  +7
    //       6     76 = 7*10  +6
    //      5     765 = 76*10 +5
    //     4     7654 = 765*10+4
    int r=0, x2=x;///x的分身x2, 因為x會剝皮剝光光
	///之後要把 r 改成 long long int r = 0;
    while(x>0){ //剝皮法
        r = r*10 + x%10;//取出x的個位數 (剝皮)
        printf("x:%d r:%d\n", x, r);

        x = x /10;

    }
    ///如果倒過來的結果r
    if(r==x2) return true;
    else return false;
}
int main()
{
    isPalindrome(121);
}
```


C 的版本, 

C++ 的版本, 會用到 class 及 public 等, 同學還沒有學到的東西
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
        long long int r=0, x2=x;
        while(x>0){
            r = r*10+x%10;
            x = x / 10;
        }
        if(x2==r) return true;
        else return false;
    }
};
```


## step03-1_今天最後一題, 是解 LeetCode 26 (去除重覆的)。在解 LeetCode時, 習慣都是要寫一個函式, 來解決問題。本題是 int removeDuplicate(int *nums, int numSize) 函式, 最後會回傳「有幾個不同的數字」而且這些數字, 都被推到陣列的最左邊排好。

LeetCode: 26. Remove Duplicates from Sorted Array

```cpp
int removeDuplicates(int* nums, int numsSize){
//出來整數k 有幾個數字
                   //指標,就是陣列,
    int k=1;
    for(int i=1; i<numsSize; i++){
        if(nums[i-1]==nums[i]) continue; ///相同,不做事
        else{///不相同的,要搬家
            nums[k] = nums[i];
            k++;
        }
    }
    return k; //先亂給答案, 騙出、套出它的答案
}
```

```cpp
int removeDuplicates(int* nums, int numsSize){
    int k=1;
    for(int i=1; i<numsSize; i++){
        if( nums[i] == nums[i-1] ) continue;
        else{
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
```

下面程式, 是為了使用 C Tutor Python 使用指標把程式執行過程畫清楚, 而改寫的程式碼
https://pythontutor.com/c.html#mode=edit 

```cpp
#include <stdio.h>
int *p1, *p2, *pk;
int removeDuplicates(int* nums, int numsSize){
    int k=1;
    for(int i=1; i<numsSize; i++){
        p1 = &nums[i-1];
        p2 = &nums[i];
        pk = &nums[k];
        if( nums[i-1] == nums[i] ) continue;
        else{
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int a[10]={0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(a, 10);
    for(int i=0; i<k; i++){
      printf("%d ", a[i]);
    }
}
```


## step03-2_請將今天的程式(week05-1.cpp week05-2.cpp week05-3.cpp), 利用 Git 備份到 GitHub 上


- 0. 安裝 Git 開啟 Git Bash
- 1. 進入桌面 cd desktop  複製 git clone https網址  再進入 cd 2022c
- 2. 開檔案總管 start .  再整理目錄 week05
- 3. 加入帳冊 git add .
- 4. 確認修改
- 4.0. git config --global user.email jsyeh@mail.mcu.edu.tw
- 4.0. git config --global user.name jsyeh
- 4.1. git commit -m week05
- 5. 推送上雲端 git push

