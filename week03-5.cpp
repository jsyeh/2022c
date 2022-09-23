///某正整數
///用8除餘6
///用9除餘7
///用15除餘13
///Step01: 先印出餘數 Step02試所有的數字
#include <stdio.h>
int main()
{
    for( int n=1; n<2000; n++ ) { ///會試很多數字
        if( n%8==6 && n%9==7 && n%15==13 ) {
            printf("\n現在的數字是:%d\n", n);
            printf("用8除餘%d\n" , n%8 );
            printf("用9除餘%d\n" , n%9 );
            printf("用15除餘%d\n" , n%15 );
        }
    }
}
