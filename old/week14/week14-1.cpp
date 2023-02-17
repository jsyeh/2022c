///ㄧ计跑计絛瞅
#include <stdio.h>

int a=10; ///Global 办跑计

void func()
{
    a = 30;
    printf("func()い aэΘ:%d\n", a);
}
int main()
{
    ///柑⊿Τ,穦ノ a
    printf("main()い a琌:%d\n", a);
    func();
    printf("main()い a琌:%d\n", a);
}
