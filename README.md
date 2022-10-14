# 2022c
資傳一甲 程式設計 的程式倉庫

# Week01
放假(中秋節)

# Week02

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
