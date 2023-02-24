///Week02-2.cpp step01-2 if() to compare big and small
//10 12
//10 14
//100 200
//300 400
//500 300
#include <stdio.h>

int main()
{
	int a, b;

	while(	scanf("%d%d", &a, &b)==2){
		int ans = b - a;
		if(ans<0) ans = a - b;
		//if(a>b) ans = a-b;
		//if(b>a) ans = b-a;
		printf("%d\n", ans);
	}
}
