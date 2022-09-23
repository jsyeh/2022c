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
