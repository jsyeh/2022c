///什麼是字串
///之前教過 int 整數 "%d"
///之前教過 float 浮點數(有小數點) "%f"
///現在要教2個 char "%c" 和很多個 char "%s"
#include <stdio.h>
int main()
{
    printf("Hello World\n"); ///第1週教過字串了

    char line[] = "Hello World"; ///字串的宣告、給值
    ///沒有寫多大,就電腦幫忙數,把格子準備好

    printf("整數 %d\n", 100);
    printf("浮點數 %f\n", 3.141592653589793238462643383279);
    printf("%s 字串\n", line ); ///字串拿來用!
}
