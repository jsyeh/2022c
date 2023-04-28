///(SOIT106_BASE_008) 基礎題：兩數間可被5整除的整數 : 輸入兩個整數，找出兩數之間所有可以被5整除的整數。
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}

	for(int i=a; i<=b; i++){
		if(i%5==0) printf("%d\n", i);
	}

}
