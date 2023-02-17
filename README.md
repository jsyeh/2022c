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





