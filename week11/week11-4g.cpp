///(SOIT106_BASE_009) ��¦�D�G��ƶ��̤j�Z�� : ��J3�Ӭ۲���ơA��X��ƶ��̤j���Z���C
#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int min, max;
	if(a<=b && a<=c) min = a;
	if(b<=a && b<=c) min = b;
	if(c<=a && c<=b) min = c;

	if(a>=b && a>=c) max = a;
	if(b>=a && b>=c) max = b;
	if(c>=a && c>=b) max = c;

	printf("%d\n", max-min);

}
