///Week01-2.cpp step02-1_要scanf()讀入資料
#include <stdio.h>
int main()
{///先讀入字母, 再讀入整數 (如果反過來,可能會讀到Enter鍵)
    printf("請輸入字母: ");
    char c;
    scanf("%c", &c);
    printf("你輸入 %c\n", c);

    printf("請輸入整數: ");
    int a;
    scanf("%d", &a);
    printf("你輸入 %d\n", a);
}
