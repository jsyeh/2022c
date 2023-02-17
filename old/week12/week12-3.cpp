///陣列的宣告、給值、拿來用
#include <stdio.h>
int main()
{
    int a[2][3]={ {10,20,30}, {40,50,60} };
    ///左手i, 右手j
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j] );
        }
        printf("\n");
    }
}
