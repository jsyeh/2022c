#include <stdio.h>
int main()
{
    int a=99, b=33;
    printf("%d %d\n", a, b);
    ///int temp=a;
    ///a=b;
    ///b=temp;
    a ^= b; /// a = a ^ b; a�̲{�b��(a b) 2���F�� a b
    b ^= a; /// b = b ^ a; �N��O (b (a b)) 3�F��,����b,��a
    a ^= b; /// a = a ^ b; ((a b) a) ����a, �ѤU b

    printf("%d %d\n", a, b);
}
