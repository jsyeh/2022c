// (SOIT108_Base_001) 基礎題：找千位數 :
//讀入 1000 - 100000 的數字，找出其千位數的數字

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = n/1000 %10;
	printf("%d", ans);
}
