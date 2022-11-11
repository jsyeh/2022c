#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};

    for(int i=0; i<4; i++){ ///電腦的迴圈,0開始
        printf("a[%d]: %d\n", i, a[i] );
    }

    for(int i=3; i>=0; i--){
        printf("%d ", a[i] );
    }

}
