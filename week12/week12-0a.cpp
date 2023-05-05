///SOIT106_BASE_006) 基礎題：三數極大 :
/// 輸入三個正整數，輸出其最大值。

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if(a>=b && a>=c) printf("%d\n", a);
	else if(b>=a && b>=c) printf("%d\n", b);
	else if(c>=a && c>=b) printf("%d\n", c);

}
