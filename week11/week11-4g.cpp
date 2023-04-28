///(SOIT106_BASE_009) 基礎題：整數間最大距離 : 輸入3個相異整數，找出整數間最大的距離。
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
