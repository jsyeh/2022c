///Week06-4.cpp step03-1 ���Ыܦh�ƧǪk   100�U*100�U=10000����
///�j�@�W�Ъ�Bubble Sort �P Selection Sort���ܺC,��2�h�j��d�w
///Quick Sort �W�ŧ�, ex. 100�U�ӼƦr, ���]2�d�U��
#include <stdio.h>
#include <stdlib.h> ///���F qsort()�禡
int a[10] = {9,8,7,1,2,3,6,5,4,0}; ///�Ʀr�Ӥ�,���S�t�ܦh,�u�O�Ҥl
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
