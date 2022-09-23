///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///Step01: 先印出餘數
#include <stdio.h>
int main()
{
    printf("請輸入1個數字:");
    int n;
    scanf("%d", &n);
    printf("用8除餘%d\n" , n%8 );
    printf("用9除餘%d\n" , n%9 );
    printf("用15除餘%d\n" , n%15 );
}

