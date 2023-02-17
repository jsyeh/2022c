///(SLJ-Array-027) 股票最佳買點與賣點 :
///輸入:n 以及n天的股價輸出:最佳買點與賣點,以及獲利
///例. 10 5 7 10 8 4 6 9 11 14 10 最大利潤=14-4=10
/*
請按任意鍵繼續 . . .
最大利潤
*/
// 股票的最佳買點與賣點
#include <stdio.h>
int a[2000];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i] );
	}

	int max=-99999999, buy, sell;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]-a[i]>max){
				max = a[j]-a[i];
				buy = i;
				sell = j;
			}
		}
	}
	printf("請按任意鍵繼續 . . . \n");
	printf("最大利潤=%d-%d=%d\n", a[sell], a[buy], max);
}
