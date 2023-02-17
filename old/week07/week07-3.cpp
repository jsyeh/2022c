///複習最大公因數 long long int 版本
///輾轉相除法: 老大、老二、老三
#include <stdio.h>
int main()
{
    long long int a, b, c;///很長很長的整數 a,b,c
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n", b);
}
