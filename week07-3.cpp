///�Ʋ̤߳j���]�� long long int ����
///����۰��k: �Ѥj�B�ѤG�B�ѤT
#include <stdio.h>
int main()
{
    long long int a, b, c;///�ܪ��ܪ������ a,b,c
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("���׬O:%lld\n", b);
}
