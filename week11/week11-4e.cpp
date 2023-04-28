///(SOIT106_BASE_005) 基礎題：因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans=0;
	for(int i=1; i<=n; i++){
		if( n%i == 0 ) ans ++;
	}

	printf("%d\n", ans);
}
