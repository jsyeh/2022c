// (SOIT108_Base_008) 基礎題：區間測速 :
//題目內容：龜山區萬壽路1段裝設區間測速器，長度1.2公里，
//輸入1個整數(車輛通過該區間所行駛的秒數)，
//輸出它的時速印出來(只印整數部分，小數部分無條件捨去)。
//(時速的單位是每小時幾公里( km/hour)。
//1小時有60分鐘，1分鐘有60秒，輸入的是秒數) 數字範圍：整數1 – 1000

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans = 60*60*1.2/n;
	printf("%d", ans);

}
