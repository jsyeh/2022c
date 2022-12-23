///SLJ-Function-002：階乘函數計算n取m的組合數
///(SLJ-Function-002) 階乘函數計算n取m的組合數 :
///請設計一個計算n!函數 fact, 配合主程式來計算n取m的組合數.
///註: n取m的組合數為 (1) n!/(m!*(n-m)!), 0<=m<=n (2) 0 , 其他
///例. 4 2 6 例. 5 3 10 例. 4 -1 0

#include <stdio.h>
int fact(int n)
{
	int ans=1;
	for(int i=1; i<=n; i++){
		ans *= i;
	}
	return ans;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	if(0<=m && m<=n) {
		int ans = fact(n)/ (fact(m)*fact(n-m));
		printf("%d", ans);
	} else {
		printf("0");
	}
}
