//Week02-1.cpp step01-1 while + scanf() ==2
#include <stdio.h>

int main()
{
	int a, b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		if(a>b) ans = a-b;
		if(b>a) ans = b-a;
		printf("%d\n", ans);
	}
}
/*
#include <stdio.h>
int main()
{
    ///32�줸 �i�J 64�줸, �o�� Intel AMD����
    ///x64 x86 �{���i���۬ۮe (int�� 32�줸)
    ///42,9496,7296 42��
/// �ܪ��ܪ������ ��� long long int
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    ///�O L L D ���p�g, ���O�Ʀr 1 1 D
    printf("%lld %lld\n", a, b);
}
*/
