//(SOIT106_ADVANCE_008_C) �i���D�G����Ȩ�� :
#include <stdio.h>
int f(int n)
{
	//if(n>0) return n;
	//else return -n;

	return n>0 ? n : -n ;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
