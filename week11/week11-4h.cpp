/// (SOIT106_BASE_012) 基礎題：整數轉換為等級 :
///輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；
///如果輸入的整數小於90但大於或等於80則輸出B，
///如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F。
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
