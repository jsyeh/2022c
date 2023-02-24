#include <stdio.h>
int main()
{
    ///32位元 進入 64位元, 發生 Intel AMD之爭
    ///x64 x86 程式可互相相容 (int用 32位元)
    ///42,9496,7296 42億
/// 很長很長的整數 改用 long long int
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    ///是 L L D 的小寫, 不是數字 1 1 D
    printf("%lld %lld\n", a, b);
}
