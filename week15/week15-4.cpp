///字串反印 (反過來印) (想想看,百數反印,還記得嗎?)
/// ABCDE 印出 EDCBA         for(int i=99; i>=0; i--) 反過來的迴圈
/// 1234567 印出 7654321
#include <stdio.h>
char line[3000]; ///外面宣告陣列,可以比較
int main()
{
    printf("請輸入一堆字母,不要有空格哦: ");///這行考試不用寫

    scanf("%s", line);
    ///printf("%s", line);

    int N=0;
    for(int i=0; line[i]!=0; i++){ ///字串的迴圈
        N++;
    }///你在數,有幾個字母在你的字串裡面!

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
