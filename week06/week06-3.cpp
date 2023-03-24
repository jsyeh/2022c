///Week06-3.cpp step02-2 排序 sort
///可能會用到 迴圈 while() for(), 陣列, if判斷, 交換
#include <stdio.h>
int main()
{
    int a[10] = {9,8,7, 1,2,3, 6,5,4, 0};

    ///泡泡排序 Bubble Sort
    for(int k=0; k<10-1; k++){ ///重覆做很多次...10次? 9次就可以了
        for(int i=0; i<10-1; i++){
            if( a[i] > a[i+1] ){
                int temp = a[i];///不對就交換 多一個變數
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        for(int i=0; i<10; i++){
            printf("%d ", a[i] );
        }
        printf("\n");
    }
}
