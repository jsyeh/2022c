/// (SOIT106_BASE_003) 基礎題：N數之和 : 輸入一個整數N，之後讀入N個整數，請輸出其和。
//for loop
#include <stdio.h>
int main()
{
	int N, a;
	scanf("%d", &N);

	int sum = 0;
	for(int i=0; i<N; i++){
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);
}
