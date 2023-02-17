///Week01-3.cpp step02-2 字串 (很多字母)
#include <stdio.h>
int main()
{
    printf("請輸入字串: ");

    char c; ///這行只是示範,不用寫啦
    char line[40]; ///字串
    scanf("%s", line); ///不能加&
    ///會被空格、TAB、Enter斷開

    printf("你讀入了: %s\n", line);

}
