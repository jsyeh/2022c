///(SOIT106_BASE_002) ��¦�D�G��s�� : ���]��50���B5���M1����3�صw���A�п�J�@�Ӫ��B�A����ܵ��P��Ӫ��B�һݪ��ֵ̤w���զX�C

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int n50 = n/50;
	int n5 = n%50 / 5;
	int n1 = n%5 ;

	printf("%d=50*%d+5*%d+1*%d\n", n, n50, n5, n1);
}
