/// (SOIT106_BASE_012) ��¦�D�G����ഫ������ :
///��J�@�Ӿ�ơA�p�G�ҿ�J����Ƥj��ε���90�A�h��XA�F
///�p�G��J����Ƥp��90���j��ε���80�h��XB�A
///�p�G�p��80���j��ε���60�A�h��XC�F�p����L��ơA�h��XF�C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if(n>=90) printf("A");
	else if(n>=80) printf("B");
	else if(n>=60) printf("C");
	else printf("F");

	printf("\n");
}
