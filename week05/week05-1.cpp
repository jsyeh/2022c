///Week05-1.cpp step01-1
///����,�N�O�}�C�C�}�C,�N�O���СC
#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int * p = a;
    for(int i=0; i<10; i++){
        printf("a[i]:%d -- p[i]:%d\n", a[i], p[i]);
    }
}
