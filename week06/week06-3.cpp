/// 51/68 約分
///暴力法
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ///i 把1......51都拿來算
    for(int i=1; i<=a; i++){ ///i:1....51
        if( a%i==0 && b%i==0) ans=i;
    }   /// 有整除    有整除  找到答案
    printf("找到ans:%d", ans);
}
