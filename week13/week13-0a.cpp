///(SOIT106_ADVANCE_001) 進階題：反序數字 :
/// 輸入1個正整數，將該整數所有數字反序排列後組成一個的新整數，
//計算出兩者相加的結果。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int n2 = n;

	int ans = 0;
	while(n>0){
		ans = ans * 10 + n%10;
		n = n / 10;
	}

	printf("%d+%d=%d\n", n2, ans, n2+ans);
}
