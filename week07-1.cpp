///���O long long int
#include <stdio.h>
int main()
{///int ��� �i�H�� 32-bit �����
    int n = 1234567812345678;
    printf("%d\n", n);///�X�ƤF
    ///�̤j�u��˳o��j 2,147,483,647

    long long int a = 1234567812345678;
    printf("%lld\n", a);
}
/// Intel    vs. AMD �j��
/// x86         �ӵ۰� (32�줸�q��)
/// 20�~�e,�O�ɭԵo��64�줸�q��
/// IA64�s�[�c  AMD64�n�ۮe�¬[�cx86
///             (�j��)
/// x64 == intel64 == amd64 �@��
