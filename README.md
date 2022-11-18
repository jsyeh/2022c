# 2022c
資傳一甲 程式設計 的程式倉庫

# Week01
放假(中秋節)

# Week02

## step01-1_介紹課程相關資訊-What, Why, How 學什麼、為什麼學、如何學

## step01-2_介紹寫程式時,會用到鍵盤各式符號

## step02-1_介紹為什麼要學程式設計、試用瘋狂程設

## step02-2_利用瘋狂程設, 複習Hello World程式, 並介紹課本第二大頁printf()的%d插入數值

```cpp
///File-New-Empty 空白檔案(滾輪放大)Ctrl-Shift-N
///File-Save file as另存week02-1.cpp 會變色
#include <stdio.h>
int main()
{
    printf("Hello World\n");
}
///寫好程式,存檔。齒輪+三角形Build&Run
```


```cpp
///File-New-Empty 空白檔案(滾輪放大)Ctrl-Shift-N
///File-Save file as另存week02-2.cpp 會變色
#include <stdio.h>
int main()
{
    printf("Hello World\n");
    printf("Hello%dWorld\n", 33);
}
```
## step03-1_介紹課本的int整數變數的盒子的概念, 並試著改變裡面的值, 利用 printf()印出來


```cpp
///初學者最適合學習程的工具 CodeBlocks
//斜線 右上左下 2條,註解 解釋
///這個比較清楚
#include <stdio.h>
int main()
{
    int a;///是個整數
    int b;///也是個整數
    a=9;
    printf("現在的a是%d\n", a);
    a=77;
    printf("現在的a是%d\n", a);
}
```

```cpp
///File-New-Empty空白檔案
///File-Save file As 另存新檔 week02-3.cpp
///初學者最適合學習程的工具 CodeBlocks
//斜線 右上左下 2條,註解 解釋
///這個比較清楚
#include <stdio.h>
int main()
{
    int a;///是個整數
    int b;///也是個整數
    a=9;
    printf("現在的a是%d\n", a);
    a=77;
    printf("現在的a是%d\n", a);
}
///寫完程式,按 Build&Run (齒輪+三角形)
```

## step03-2_利用實習課的平方和的程式, 介紹下週的考試題目-兩數相加

```cpp
///File-New-Empty 空白檔案(滾輪放大)Ctrl-Shift-N
///File-Save file as另存week02-2.cpp 會變色
#include <stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", a+b );
}
```


# Week03

## step01-0_考試前複習

## step01-1_介紹學習的技巧

## step01-2_帶同學註冊GitHub帳號
1. GitHub.com 註冊, 換大頭貼 
+repo程式倉庫

## step02-1_帶同學建立GitHub的程式倉庫,將上週的程式寫好後, 上傳到程式倉庫裡


## step02-2_介紹加減乘除運算,並解釋餘數的運算

```cpp
///File-New-Empty 空白檔案(滾輪放大)Ctrl-Shift-N
///File-Save file as另存week03-1.cpp 會變色
#include <stdio.h>

int main()
{
    printf("請輸入2個數字:");

    int a, b;
    scanf( "%d%d", &a, &b );
    printf(加 %d 得到 %d\n", a, b, a+b );
    printf("%d 減 %d 得到 %d\n", a, b, a-b );
    printf("%d 乘 %d 得到 %d\n", a, b, a*b );
    printf("%d 除 %d 得到 %d\n", a, b, a/b );
    printf("%d 除 %d 的餘數 %d d\n", a, b, a%b );
}
```

## step02-3_介紹比大小, 並配合 if(判斷)進行實作

```cpp
///File-New-Empty 空白檔案(滾輪放大)Ctrl-Shift-N
///File-Save file as另存week03-2.cpp 會變色
///比大小
#include <stdio.h>

int main()
{
    printf("請輸入1個數字:");

    int n;
    scanf("%d", &n);
    if( n>10 ) printf("大於10\n");
    if( n<10 ) printf("小於10\n");
    if( n==10 ) printf("等於10\n");
}
```

## step03-1_介紹下週考試題目-判斷奇數偶數

```cpp
///不要寫在這裡,但要copy過來 (下週的考試)
///判斷 奇數、偶數
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if( n%2 == 0 ) printf("even");
	else printf("odd");
}
```


## step03-2_利用程式來解決問題, 有網友問某正整數,對8除餘6,對9除餘7,對15除餘13, 利用程式配合for(迴圈)找出來

```cpp
///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///Step01: 先印出餘數
#include <stdio.h>
int main()
{
    printf("請輸入1個數字:");
    int n;
    scanf("%d", &n);
    printf("用8除餘%d\n" , n%8 );
    printf("用9除餘%d\n" , n%9 );
    printf("用15除餘%d\n" , n%15 );
}
```

```cpp
///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///Step01: 先印出餘數 Step02試所有的數字
#include <stdio.h>
int main()
{
    for( int n=1; n<2000; n++ ) { ///會試很多數字
        if( n%8==6 && n%9==7 && n%15==13 ) {
            printf("\n現在的數字是:%d\n", n);
            printf("用8除餘%d\n" , n%8 );
            printf("用9除餘%d\n" , n%9 );
            printf("用15除餘%d\n" , n%15 );
        }
    }
}
```
## step03-3_上傳到GitHub


# Week04

## step01-0_考試前複習「奇偶數」的寫法,及常見錯誤

## step01-1_閏年是什麼呢 2月29天。其實是一年365天不精確, 365.25也不精確, 所以有 4年一閏、100年不閏、400年又閏的規則。為了讓程式的思考簡單, 老師教你倒過來想, 先想稀有的400年,再100年,再4年,再剩下。

```cpp
///閏年
#include <stdio.h>
int main()
{
    printf("請輸入西元年:");
    int n;
    scanf("%d", &n);
    if( n%400==0 ) printf("閏年");
    else if( n%100==0 ) printf("普通年/平年");
    else if( n%4==0 ) printf("閏年");
    else printf("普通年/平年");
}
```

## step01-2_接下來在瘋狂程設 練習 下週的考試題目「閏年」,只要印出 Yes 或 No, 老師用了簡單的寫法,及比較有難度但行數較少的寫法

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if( n%400==0 ) printf("Yes");
	else if( n%100==0 ) printf("No");
	else if( n%4==0 ) printf("Yes");
	else printf("No");
}
```

## step02-1_為了熟悉for(迴圈),所以先試電腦從0開始的版本

```cpp
///for(迴圈)
#include <stdio.h>
int main()
{          ///這裡寫4, i:0,1,2,3 共4個
    for( int i=0; i<4; i++ ){ ///電腦從0開始
        printf("印出%d\n", i );
    }
}
```

## step02-2_有同學打字比較慢, 所以老師教大家了解鍵盤。在打字時,左手食指在f,右手食指在j, 先熟悉中間,再熟悉上面、下面的鍵, 再用 keyboard ninja來練習

## step03-1_了解for迴圈後, 我們再來思考人類熟悉的版本, 從1開始數。了解 電腦的迴圈後, 我們再來熟悉人類的迴圈 for(int i=1; i小於等於4; i++) 會執行4次。人類的部分比較直覺, 但是程式碼看起來會長一點點。

```cpp
///for(迴圈)
#include <stdio.h>
int main()
{          ///這裡寫4, i:0 1 2 3 共4個
    for( int i=0; i<4; i++ ){ ///電腦從0開始
        printf("印出%d\n", i );
    }
    for( int i=1; i<=4; i++ ){ ///人類從1開始
        printf("人類的版本,印出:%d\n", i );
    }          ///寫4, i: 1 2 3 4 共4個
}
```

## step03-2_練習排版 Allmen (ANSI) 與 K&R

```cpp
///for(迴圈)
#include <stdio.h>
int main() ///Allmen (ANSI)
{
    ///這裡寫4, i:0 1 2 3 共4個
    for( int i=0; i<4; i++ )   ///電腦從0開始
    {
        printf("印出%d\n", i );
    }
    for( int i=1; i<=4; i++ )   ///人類從1開始
    {
        printf("人類的版本,印出:%d\n", i );
    }          ///寫4, i: 1 2 3 4 共4個
}
```

## step03-3_上傳GitHub


# Week05

## step01-0_考前復習_閏年

## step01-1_從if(判斷)出發, 修改成while(迴圈)一直執行

```cpp
///while(迴圈)
#include <stdio.h>
int main()
{
    int a=10;

    ///只執行1次,只印1行
    ///if( a>0 ) printf("a:%d a>0\n" , a );

    while( a>0 ) printf("a:%d a>0\n" , a );
    ///一直執行
}
```

## step01-2_剛剛的while(迴圈)沒什麼變化,所以我們每次印完後 a-- 它就不會瘋狂執行,而是執行5次就停接著老師介紹流程圖。

```cpp
///while(迴圈)
#include <stdio.h>
int main()
{
    int a=5;
    while( a>0 ){
        printf("a:%d a>0\n" , a );
        a-- ;
    }
}
```

## step02-1_介紹完while(迴圈),回來介紹課本第3章第2個主題for(迴圈), 以前一個程式為基礎,改用for(迴圈)的語法,做一模一樣的事 

```cpp
#include <stdio.h>
int main()
{
    ///int a=5;
    ///while( a>0 ){
    ///    printf("a:%d a>0\n" , a );
    ///    a-- ;
    ///}
    for( int a=5 ; a>0 ; a-- ){
        printf("a:%d a>0\n" , a );
    }
}
```

## step02-2_接下來介紹for(迴圈) 的基礎型(電腦從0開始,精簡)、進階型(人類從1開始數,程式多一點點)

```cpp
#include <stdio.h>
int main()
{
    for( int i=0; i<5; i++){ ///迴圈基本型: 電腦,精簡
        printf("電腦從0開始數, i:%d\n", i);
    }
    for( int i=1; i<=5; i++){ ///迴圈進階型: 人類,多一點點
        printf("人類從1開始數多一點點, i:%d\n", i);
    }
    for( int i=5; i>0; i--){ ///迴圈倒過來型
        printf("倒過來的迴圈, i:%d\n", i);
    }
}
```

## step02-2b_迴圈基本型、進階型、倒過來型

```cpp
#include <stdio.h>
int main()
{  //You need to use Advanced Human
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			printf("%d*%d=%2d ", j, i, i*j );
		}
		printf("\n");
	}
}
```

## step03-1_下週考試要考九九乘法表,會用到今天第二節課教的for迴圈進階型,而且還用2次, 一個是左邊的迴圈,決定有幾行。一個是右邊的迴圈,決定一行有幾個。在印的時候,要小心是要印哪一個數字

```cpp
///(1) 畫星星, 口訣: 左手i, 右手j
#include <stdio.h>
int main()
{   ///印 5 4 3 2 1 倒過來的迴圈
/// for(int i=0; i<5; i++){ //(2)迴圈基礎型
    for(int i=5; i>0; i--){ ///(3) 左手i建出鷹架
        for(int j=0; j<i; j++){///(2)迴圈基礎型
            printf("*"); ///逐一畫星星
        }
        ///printf("%d個星星\n", i);///(3)鷹架
        printf("\n"); ///跳行
    }
}
```

## step03-2_兩層迴圈的練習中,最常使用「畫星星」來做, 老師帶大家,利用迴圈的基本型、進階型、倒過來型,方便理解怎麼做出鷹架,便能把程式寫出來。

```cpp
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=N-1; i>=0;i--){
        int space = i;
        int star = (N-i)*2-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
        ///printf("%d空格 %d星星\n", i, N-i);
    }

}
```

另外有同學問另一題畫星星, 也做示範

```cpp
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int space=N-i, star = i*2-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
        ///printf("space:%d star:%d\n", N-i, i*2-1);
    }
}
```

# Week06

## step01-0
考試九九乘法表 考前複習、考後檢討同學出錯的狀況
```cpp
#include <stdio.h>
int main()
{
	for(int a=1; a<=9; a++)
	{
		for(int b=1; b<=9; b++)
		{
			printf("%d*%d=%2d ", b, a, a*b);
		}
		printf("\n");	
	}
}
```
## step01-1_畫星星-金字塔
使用的技巧,是先用左手i來建立鷹架
```cpp
//上週的畫星星
// ***** 鷹架 5
// **** 鷹架 4
// *** 鷹架 3
// ** 鷹架 2
// * 鷹架 1
#include <stdio.h>
int main()
{
    //for(int i=5; i>=1; i--){ ///先寫第1個左手的迴圈,鷹架確定OK,再加
    //    for(int k=0; k<i; k++) printf("*");

    //    printf("\n");
    //    ///printf("鷹架 %d\n", i); 先寫第1個左手的迴圈,鷹架確定OK,
    //}
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);///先寫第1個左手的迴圈,鷹架確定OK
    }

}
///  有點像2倍 2倍-1
///     *    鷹架:1樓 1星
///    ***   鷹架:2樓 3星
///   *****  鷹架:3樓 5星
///  ******* 鷹架:4樓 7星
/// *********鷹架:5樓 9星
```

## step01-2_金字塔
有了鷹架樓層,接下來便是決定第i樓有幾個space空格、有幾個star星星。找到規律,便能寫出公式, 並利用迴圈基礎型,輕鬆把星星畫出來。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){ ///(1)樓層鷹架
        int space = 5-i;///(2)數有幾個空格
        int star = i*2-1;///(2)數有幾個星星
        for(int k=0; k<space; k++){ ///(3)迴圈標準型
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" 鷹架:%d樓 %d空格 %d星\n", i, space, star);
    } ///(1)樓層鷹架
}
///     *    鷹架:1樓 4空格 1星
///    ***   鷹架:2樓 3空格 3星
///   *****  鷹架:3樓 2空格 5星
///  ******* 鷹架:4樓 1空格 7星
/// *********鷹架:5樓 0空格 9星
```

## step02-1_想要分數約分,可以使用暴力法,去找到都整除的數字, 就能約分了
```cpp
/// 51/68 約分
///暴力法
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ///i 把1......51都拿來算
    for(int i=1; i<=a; i++){ ///i:1....51
        if( a%i==0 && b%i==0) ans=i;
    }   /// 有整除    有整除  找到答案
    printf("找到ans:%d", ans);
}
```

## step02-2_介紹輾轉相除法

```cpp
///暴力法有點慢 想要快 1億倍!!!
///國中將不會教的「輾轉相除法」
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c; ///大,中,小
    scanf("%d %d", &a, &b);

    while(1){ ///一直做
        c = a%b;///小 a除b 得到餘數
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break; ///離開迴圈 跳開
        a = b; ///大二變老大
        b = c; ///老三變老二
    }
    printf("中的是:%d", b);
}
```

## step03-1_講解剛剛輾轉相除法程式中的意思,接下來為了介紹 while(1) 一直執行的原因, 所以利用if(1)來示範成立、不成立的差別

```cpp
#include <stdio.h>
int main()
{
    int a=10;
    ///if(a>0) printf("a大於0\n");

    if(-999 ) printf("-999成立\n");
    if(-3 ) printf("-3成立\n");
    if(-2 ) printf("-2成立\n");
    if(-1 ) printf("-1成立\n");
    if( 0 ) printf("0不成立,所以什麼都沒印\n");
    if( 1 ) printf("1成立\n");
    if( 2 ) printf("2成立\n");
    if( 3 ) printf("3成立\n");
    if( 4 ) printf("4成立\n");
    if( 999 ) printf("999成立\n");
    if( "a==0" ) printf("不管什麼東西,幾乎都成立\n");
}
```
## step03-2_介紹如何利用 Markdown 語法, 修改 README.md 的內容, 包括大標題、小標題, 尤其是關於程式碼的部分

# Week07

## step01-0_考前複習畫星星(金字塔),並講解容易出錯的地方

## step01-0b_考後複習,講解同學出錯的地方

## step01-1_今天上課,復習之前教過的int整數型別, 只有32-bit,最多只能裝2,147,483,647, 所以很長很長的整數, 要用 long long int,

```cpp
///型別 long long int
#include <stdio.h>
int main()
{///int 整數 可以裝 32-bit 的整數
    int n = 1234567812345678;
    printf("%d\n", n);///出事了
    ///最大只能裝這麼大 2,147,483,647

    long long int a = 1234567812345678;
    printf("%lld\n", a);
}
/// Intel    vs. AMD 大戰
/// x86         照著做 (32位元電腦)
/// 20年前,是時候發明64位元電腦
/// IA64新架構  AMD64要相容舊架構x86
///             (大勝)
/// x64 == intel64 == amd64 一樣
```

## step02-1_有了long long int 那我們便能回來複習最大公因數了。數字範圍再大一點, 結果要算好久。讀寫資料時要用%lld 是小寫的LLD,不是數字11d哦

```cpp
///複習最大公因數 long long int 版本

#include <stdio.h>
int main()
{
    long long int a, b; ///很長很長的整數 a, b
    scanf("%lld%lld", &a, &b);///要用小寫的LLD

    long long int ans;
    ///去試 1,2,3,... a 看能能不能和 a b 都整除
    for(long long int i = 1; i<=a; i++){ ///好慢哦!!!
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("答案是:%lld\n", ans);
}
```

## step02-2_因為前面的暴力法真的很慢,所以我們要改用輾轉相除法。上週做過, 今天再用 long long int 很長很長的整數 再做一次。口訣是 老大a, 老二b 可以算出 老三c=a%b, 如果老三c是0, 老二b就是答案。輾轉的意是,是老二變老大, 老三變老二, 利用while(1)持續去做。

```cpp
///複習最大公因數 long long int 版本
///輾轉相除法: 老大、老二、老三
#include <stdio.h>
int main()
{
    long long int a, b, c;///很長很長的整數 a,b,c
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n", b);
}
```

## step03-1_今天為了教剝皮法, 老師先介紹資工系阿平老師出的題目,把數字3位一逗號。再介紹十進位的每一位數取出來,再介紹利用while(迴圈)的方法, 最後還有示範十進位轉二進位。

```cpp
///剝皮法
#include <stdio.h>
int main()
{
    int n=1234;
    ///如果你有1234元,請問有張1000元
    printf("一千元有:%d張\n", n/1000 );
    n = n % 1000; ///餘 剩下的
    printf("一百元有:%d張\n", n/100 );
    n = n % 100;
    printf("十元有:%d枚\n", n/10 );
    n = n % 10;
    printf("一元有:%d枚\n", n);
}
```

```cpp
///倒過來剝皮
#include <stdio.h>
int main()
{
        int n=123456789;
        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;

        printf("個位數是%d\n", n%10 );
        n = n / 10;
}
```

```cpp
///倒過來剝皮
#include <stdio.h>
int main()
{
    int n=1234;

    while( n>0 ){
        printf("個位數是%d\n", n%10 );
        n = n / 10;
    }
}
```

```cpp
///倒過來剝皮
#include <stdio.h>
int main()
{
    printf("請輸入數字: ");
    int n;
    scanf("%d", &n);
    while( n>0 ){
        printf("%d\n", n%2 );
        n = n / 2;
    }
}
```

## step03-2_老師介紹GitHub可以做網站,有專屬的網址(之後帳號名可以再改, 網址也會再改, 記得倉庫名要與帳號名前面相同。請試著用GitHub做出自己的網站。


# Week08

## step01-0_考試是輾轉相除法找最大公因數。考前複習、考後講解出錯的狀況

## step01-1.cpp 實習課要上機考了。但程式背了也沒用, 因為考試會背錯。所以要有思考的方式來解決。今天把實習的題目拿來講解「怎麼想出來的」今天的大魔王是 2個 while迴圈 來畫出直角三角形(有空格、有星星)所以先用 for迴圈來思考。可以用 3個for迴圈, 很好思考。但是只有2個for迴圈時,口訣是先能畫出正方形。再來的關鍵, 是空格有幾個。空格有n-i個。所以 把 if寫出來, 成立時印空格

```cpp
///only two for
///口訣: 正方型
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		for(int k=1; k<=n; k++){
			if( k<= n-i )  printf(" ");
			else printf("*");

		}
		printf("\n");
	}

}
```

## step02-1_今天的大魔王出現了, 是10年前江清泉老師出的有難度的趣味加分題, 只能使用2個while迴圈, 去寫出有空格、有星星的直角三角形。前一個課堂作業用了2個for迴圈,是我們現在的基礎, 將在 1分鐘之前改出來。for(int i=1;i=n; i++){...} 可改成 while迴圈的版本。結案。

```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int i=1;
	while(i<=n){
		int k=1;
		while(k<=n){
			if( k<=n-i ) printf(" ");
			else printf("*");
			k++;
		}
		printf("\n");
		i++;
	}

}
```

## step02-2_今天主題質數判別,程式的形狀都很像,好像有for迴圈、if判斷、運算等等, 但其實有個很棒的形狀,是迴圈前面有個變數, 迴圈中間看情況修改變數, 迴圈後面把變數拿出來用。不過是用暴力法找最大公因數,或是用暴力法找質數,都可這樣思考。判斷某個數是不是質數,就看能不能被約分、能不能被整除。被整除, 就不是質數, 所以就這樣反過來想即可。利用 int bad=0; 一開始沒壞掉, 迴圈裡壞掉

```cpp
///判斷某個數,是不是質數?
/// (嚴格) 不能被 約分、不能被 整除
///反過來說,只要可被約分、可被整除, 啊! 一定不是 (淘汱)

#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d", &n);

    int bad=0;/// 0:還沒壞掉, 1:代表壞掉了
    for(int i=2; i<n; i++){ ///i去試很多數字,看能不能淘汱n
        if( n%i==0 ) bad=1;///哇,完了 被整除
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)", n);
    else printf("%d 不是質數(早就壞掉了)", n);
}
```

## step02-3_前一題教完「質數判斷」接下來比較難, 要用for迴圈列出一堆數,再逐一進行「質數判斷」。請用瘋狂程設-第10週-練習模式, 試著寫出 列出質數 用 for迴圈列出 2到a 的所有質數。

```cpp
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);

	for(int n=2; n<=N; n++){

		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ", n);
	}
}
```

## step03-1_解釋同學對於 int bad=0的問題, 說明瘋狂程設在 Windows 11 22H2的問題, Windows Defender如何關閉, Microsoft Teams登入後如何還原Policy設定, 如何看之前寫過的程式碼、示範Git的幾個指令

## step03-2_介紹幾題實習的題目


# Week11

## step01-0_考試「列出質數」考前複習 
```cpp
//Step01: 大迴圈, 列很多數字
//Step02: 小迴圈, 判斷質數

#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	//Step01: 大迴圈, 列很多數字
	for( int n=2; n<=a; n++){
		//Step02: 小迴圈, 判斷質數
			int bad=0;
			for(int i=2; i<n; i++){
				if( n%i==0 ) bad=1;
			}
			if(bad==0) printf("%d ", n);
	}
}
```

## step01-1_今天主題是陣列array,照著課本練習陣列宣告、陣列宣告順便給值、把值拿出來用

```cpp
///Step1-1
#include <stdio.h>
int main()
{
    ///int a;
    ///int a[4];///有4格
    int a[4] = {10, 20, 30, 40};

    printf("a[0]:%d\n", a[0] );
    printf("a[1]:%d\n", a[1] );
    printf("a[2]:%d\n", a[2] );
    printf("a[3]:%d\n", a[3] );

}
```

## step02-1_陣列很有用, 像找質數時, 可以用篩子法快速把全部質數找出來。不過程式一開始不要教太難, 我們先用 for迴圈 + 陣列, 讓大家熟悉陣列的 [i] 方括號裡面是怎麼放的、怎麼正著印、倒著印

```cpp
#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};
        ///i: 0 1 2 3
    for(int i=0; i<4; i++){ ///電腦的迴圈,0開始
        printf("a[%d]: %d\n", i, a[i] );
    }
        ///i: 3 2 1 0
    for(int i=3; i>=0; i--){ ///倒過來的迴圈
        printf("%d ", a[i] );
    }

}
```

## step02-2_百數反印,讓同學自己寫寫看,有加分
```cpp
#include <stdio.h>
int main()
{
	int a[100];  //i: 0...99
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}
	for(int i=99; i>=0; i--){
		printf("%d\n", a[i] );
	}
}
```

## step03-1_古希臘數學家發明篩子法、發現地球周長

## step03-2_Git指令上傳GitHub
Git指令

1. 安裝 Git軟體, 開啟 Git Bash
	- 1.1. Bash 在 Mac, Linux, Windows 都可用
	- 1.2. 要在小黑下指令
	- 1.3. 可以Ctrl-Wheel放大
2. GitHub雲端 程式倉庫 要clone複製下來
	- 2.1. ex. https://github.com/jsyeh/2022c
	- 2.2. https://github.com/你的帳號/倉庫名 網址複製好
	- cd desktop
	- git clone https://github.com/jsyeh/2022c
3. 我們可以利「檔案總管」來整理你的程式倉庫
	- 檔名有錯的, 就改吧!
	- 想要整理很多目錄, 就改吧!
4. 想要更新你現在的倉庫 (1) 要在目錄裡下指令: git status 和 git add .
	- 先檢查你的目錄對不對
	- cd 2022c 進入你的目錄裡
	- git status 看到一堆紅色
	- git add . (小心空格, 靜靜的, 會把紅色的,加到你的帳冊裡
	- git status 變成綠色
5. 要簽名 commit 確認你的修改
	- 5.0. (第一次使用時, 要設定你的 user.email 及 user.name
	- 5.0. git config --global user.email jsyeh@mail.mcu.edu.tw
	- 5.0. git config --global user.name jsyeh
	- 5.1. git commit -m "修改目錄"
6. git push 推送上雲端
	- git push 會跳出小窗, 請你用 browser認證
	- 就成功了


# Week11

## step01-0_今天考試「百數反印」想考大家對於陣列、迴圈的使用熟悉度。考前複習、考後講解同學錯的狀況。


## step01-1_想要將3個數字從小到大排好時,我們需要一個技巧-交換, 老師用瓶子裡面裝 a=90咖啡, b=80清水,做示範, 需要另一個臨時的空瓶 temp 幫忙。 int temp=a; a=b; b=temp; 有點押韻的寫法。

```cpp
///兩數想交換,口訣: int temp=a; a=b; b=temp;
#include <stdio.h>
int main()
{
    int a=90, b=80;
    printf("a:%d b:%d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("a:%d b:%d\n", a, b);

}
```

## step01-2_有了前面的交換,便能試試三數排序的部分,使用的口訣是「比大小,不對就交換」, 先把 a b 比, 再把 b c 比, 最重的已經沉到最下面, 所以再加上 a b 比, 就可從小到大排好了。

其實第04週的實習課, 有寫過三數排序, 那時候用了 6個 if判斷
```cpp
///2數 => 2種結果
///3數 => 6種結果
///4數 => 24種結果
///5數 => 120種結果

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if( a>=b && b>=c ) printf("max:%d\nmid:%d\nmin:%d", a, b, c);
	else if( a>=c && c>=b ) printf("max:%d\nmid:%d\nmin:%d", a, c, b);
	else if( b>=a && a>=c ) printf("max:%d\nmid:%d\nmin:%d", b, a, c);
	else if( b>=c && c>=a ) printf("max:%d\nmid:%d\nmin:%d", b, c, a);
	else if( c>=a && a>=b ) printf("max:%d\nmid:%d\nmin:%d", c, a, b);
	else if( c>=b && b>=a ) printf("max:%d\nmid:%d\nmin:%d", c, b, a);
}
```

下面則是今天想要用的方法, 希望能有個一致的程式

```cpp
///三數排序
///口訣: 比大小,不對就交換
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70;
    if( a>b ){///希望a輕,但反過來了
        int temp=a;///不對就交換
        a=b;
        b=temp;
    }
    if( b>c ){
        int temp=b;
        b=c;
        c=temp;
    }
    ///把最重的放到c了。剩下 上面的ab再比一次
    if( a>b ){
        int temp=a;///不對就交換
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d", a, b, c);
}
```

## step02-1_其實第4週實習課有教過「3數排序」,那時候就用了6個if(判斷),雖然簡單,但很多重複的程式碼。如果我們使用step01-2的程式,好像只要比相鄰的、不對就交換,程式碼能簡化。本題試著做10數排序,使用攝影師拍團體照時調整高低的方法,口訣「從左到右巡一輪,兩兩比較,不對就交換」其中巡一輪時, 迴圈有點奇怪,只要比9次。請用CodeBlocks實作 week11-3.cpp 執行, 會發現最肥的數字慢慢移到右邊了。

```cpp
///2數 => 2種結果
///3數 => 6種結果
///4數 => 24種結果
///5數 => 120種結果
///10數排序....
///攝影師在拍團體照時,調整高低的方法
///口訣: 從左到右巡一輪, 兩兩比較, 不對就交換

#include <stdio.h>
///       a[0] a[1] ...                      a[9]
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");

    for(int i=0; i<10-1; i++){
        if( a[i] > a[i+1] ){ ///希望左小右大,但不對....
            int temp = a[i]; ///不對就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("\n");
}
```

## step02-2_前面的程式,只把「最肥的數字」移到右邊,因此,我們就用 Ctrl-C 的方法 貼很多次, 並逐一印出來,觀察它的變化,越排越多都排好了

```cpp
#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{

    for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
    printf("\n");

    for(int i=0; i<10-1; i++){ ///巡一輪
        if( a[i] > a[i+1] ){ ///希望左小右大,但不對....
            int temp = a[i]; ///不對就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
    printf("\n");

    for(int i=0; i<10-1; i++){ ///巡一輪
        if( a[i] > a[i+1] ){ ///希望左小右大,但不對....
            int temp = a[i]; ///不對就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
    printf("\n");

    for(int i=0; i<10-1; i++){ ///巡一輪
        if( a[i] > a[i+1] ){ ///希望左小右大,但不對....
            int temp = a[i]; ///不對就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
    printf("\n");

}
```

## step03-1_泡泡排序法,其實就是把剛剛的程式,重覆做很多次。因為是重覆的程式碼, 所以不需要 Ctrl-C 來複製, 而是直接用 for(int k=0; k小於「重覆的次數」; k++){ } 來重覆做。就這樣完成了泡泡排序法, 邊排邊做, 會看到「大泡泡會先到最右邊」,接著越來越多排好。10個數字,只要重覆10-1次, 因為「頒獎時,前9人知道, 最後一個也就出現了」

```cpp
#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{

    for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
    printf("\n");

    for(int k=0; k<10-1; k++){

        for(int i=0; i<10-1; i++){ ///巡一輪
            if( a[i] > a[i+1] ){ ///希望左小右大,但不對....
                int temp = a[i]; ///不對就交換
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );///印出來
        printf("\n");

    }
}
```

## step03-2_下週考試題目是「百數排序-泡泡排序法」,和前一個程式有98%相似。

```cpp
#include <stdio.h>
int a[100];

int main()
{
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}
	
	for(int k=0; k<100-1; k++){
		for(int i=0; i<100-1; i++){
			if( a[i] > a[i+1] ){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int i=0; i<100; i++){
		printf("%d\n", a[i] );
	}
}
```
