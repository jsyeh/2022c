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
