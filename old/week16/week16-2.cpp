///了解字串相關的函式
#include <stdio.h>
#include <string.h> ///字串相關
int main()
{
    char line[20]="Hello";
    int N = strlen(line);
       ///  str: string
           /// len: length
    printf("Hello字串的長度:%d\n", N);

    char line2[20];
    strcpy( line2, line );/// 把右邊copy到左邊 口訣: a=10
    printf("line2 得到: %s\n", line2);

    printf("比較字串 strcmp(line, line2) 得到 %d\n", strcmp(line, line2) );
}
