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
