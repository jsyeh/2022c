///�Ʋ̤߳j���]�� long long int ����

#include <stdio.h>
int main()
{
    long long int a, b; ///�ܪ��ܪ������ a, b
    scanf("%lld%lld", &a, &b);///�n�Τp�g��LLD

    long long int ans;
    ///�h�� 1,2,3,... a �ݯ�ण��M a b ���㰣
    for(long long int i = 1; i<=a; i++){ ///�n�C�@!!!
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("���׬O:%lld\n", ans);
}
