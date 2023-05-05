#include <stdio.h>
int main()
{
    int a=99, b=33;
    printf("%d %d\n", a, b);
    ///int temp=a;
    ///a=b;
    ///b=temp;
    a ^= b; /// a = a ^ b; a裡現在有(a b) 2個靈魂 a b
    b ^= a; /// b = b ^ a; 意思是 (b (a b)) 3靈魂,消掉b,剩a
    a ^= b; /// a = a ^ b; ((a b) a) 消掉a, 剩下 b

    printf("%d %d\n", a, b);
}
