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

