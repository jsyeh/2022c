///Week06-4.cpp step03-1 介紹很多排序法   100萬*100萬=10000億次
///大一上教的Bubble Sort 與 Selection Sort都很慢,但2層迴圈搞定
///Quick Sort 超級快, ex. 100萬個數字, 約跑2千萬次
#include <stdio.h>
#include <stdlib.h> ///為了 qsort()函式
int a[10] = {9,8,7,1,2,3,6,5,4,0}; ///數字太少,其實沒差很多,只是例子
int compare(const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}
int main()
{
    qsort(a, 10, sizeof(int), compare);
    for(int i=0; i<10; i++){
        printf("%d ", a[i] );
    }
}
