///(SOIT106_BASE_002) 基礎題：找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。

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
