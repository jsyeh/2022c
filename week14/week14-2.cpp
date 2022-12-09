///函數的變數範圍
#include <stdio.h>

int a=10; ///Global全世界 全域變數

void func()
{
    int a = 20; ///local 區域變數
    printf("func()裡的a是:%d\n", a);
    a = 30;
    printf("func()中 a改成:%d\n", a);
}
int main()
{
    ///裡面沒有,會用外面的 a
    printf("main()中 a是:%d\n", a);
    func();
    printf("main()中 a是:%d\n", a);
}
