//(SOIT106_ADVANCE_012) 進階題：
//陣列找出現次數 : 讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，數
#include <stdio.h>
int main()
{
	int a[20];
	int N=0;
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if( a[i] == 0 ){
			N = i;
			break;
		}
	}

	int next;
	scanf("%d", &next);

	int ans = 0;
	for(int i=0; i<N; i++){
		if(a[i]==next) ans++;
	}
	printf("%d\n", ans);
}
