///Week06-5.cpp step03-2 �Q�n�Χ�²��I�s��sort��k
/// std::sort()
#include <stdio.h>
#include <algorithm>  ///�K�|�� std::sort()���
int a[10] = {9,8,7,1,2,3,6,5,4,0};
int main()
{
    std::sort(a, a+10);

    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
}

