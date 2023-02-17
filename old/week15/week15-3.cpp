///想了解這些 字母/字元(單引號) vs. 字串(雙引號,複數)
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n", 65, 65);
    printf("=%c=%d=\n", '+', '+');
    printf("=%c=%d=\n", '\n', '\n');
    printf("=%c=%d=\n", '\t', '\t');
    printf("=%c=%d=\n", '\0', '\0'); ///其實就是 0

    char line[] = "Hello World AAA"; ///字串, 又叫 字元陣列
    ///用奇怪的迴圈,把字串裡,每一個字母印出來

    int N=0;///一開始還沒印字母
    for(int i=0;       ; i++){ ///不知道迴圈要跑多久
        char c = line[i];
        if( c == 0 ) break; ///如果遇到字串結尾的 0 就結束
        printf("=%c", c );
        N++; ///多印出一個字母
    }
    printf("\n你印了%d字母\n", N);
}
