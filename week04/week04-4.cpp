///Week04-4.cpp step02-3
///�n�復����
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p1, *p2; ///�X�b�@�_���ŧi�k ���n���P�P
    printf("a:%d b:%d\n", a, b);

    p1 = &a;
    *p1 = 99;  ///step02-3 �]�i�H����쪺�F��@
    printf("a:%d b:%d\n", a, b);

    p2 = p1;
    *p2 = 77;
    printf("a:%d b:%d\n", a, b);
}
