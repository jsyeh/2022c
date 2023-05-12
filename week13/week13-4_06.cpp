//(SOIT108_Base_006) 基礎題：輸入西元y年，判斷該y年是否為閏年 :
//輸入西元y年，判斷該y年是否為閏年，輸出相對訊息。
//{閏年定義：西元年份除以4可整除，且除以100不可整除，為閏年。
//西元年份除以100可整除，且除以400不可整除，為平年}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int leap = 0;
	if(n%400==0) leap = 1;
	else if(n%100==0) leap = 0;
	else if(n%4==0) leap = 1;
	else leap =0;

	if(leap==1) printf("%d is a leap year.\n", n);
	else printf("%d is not a leap year.\n", n);
}
