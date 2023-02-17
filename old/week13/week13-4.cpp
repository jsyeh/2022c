#include <stdio.h>
///函式的定義
int addnum( int a, int b )
{
    return a + b;
}///回覆、回傳給你

int main()
{
    int ans = addnum( 2, 3 );///函式的呼叫/使用
    printf("addnum(2,3) 會得到 %d\n", ans );
}
