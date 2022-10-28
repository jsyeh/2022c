///型別 long long int
#include <stdio.h>
int main()
{///int 整數 可以裝 32-bit 的整數
    int n = 1234567812345678;
    printf("%d\n", n);///出事了
    ///最大只能裝這麼大 2,147,483,647

    long long int a = 1234567812345678;
    printf("%lld\n", a);
}
/// Intel    vs. AMD 大戰
/// x86         照著做 (32位元電腦)
/// 20年前,是時候發明64位元電腦
/// IA64新架構  AMD64要相容舊架構x86
///             (大勝)
/// x64 == intel64 == amd64 一樣
