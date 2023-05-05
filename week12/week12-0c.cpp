///(SOIT106_BASE_010) 基礎題：找倍數 :
///連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。
#include <stdio.h>
int main()
{
	int ans=0;
	int n;
	for(int i=0; i<10; i++){
		scanf("%d", &n);
		if(n%3==0) ans++;
	}
	printf("%d\n", ans);
}
