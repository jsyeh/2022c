///��֪k
#include <stdio.h>
int main()
{
    int n=1234;
    ///�p�G�A��1234��,�аݦ��i1000��
    printf("�@�d����:%d�i\n", n/1000 );
    n = n % 1000; ///�l �ѤU��
    printf("�@�ʤ���:%d�i\n", n/100 );
    n = n % 100;
    printf("�Q����:%d�T\n", n/10 );
    n = n % 10;
    printf("�@����:%d�T\n", n);
}
