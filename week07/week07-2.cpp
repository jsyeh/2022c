///複習最大公因數 long long int 版本

#include <stdio.h>
int main()
{
    long long int a, b; ///很長很長的整數 a, b
    scanf("%lld%lld", &a, &b);///要用小寫的LLD

    long long int ans;
    ///去試 1,2,3,... a 看能能不能和 a b 都整除
    for(long long int i = 1; i<=a; i++){ ///好慢哦!!!
        if( a%i==0 && b%i==0 ) ans = i;
    }
    printf("答案是:%lld\n", ans);
}
