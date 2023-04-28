///(SOIT106_BASE_001) 基礎題：計算幾週與幾天 : 一週有7 天，讀入天數，計算該天數是幾週又幾天。
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	printf("%d %d\n", n/7, n%7);

}
