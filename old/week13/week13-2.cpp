///1 1 2 3 5 8 13 (21) (33)
///�f�Z: �e2���ۥ[,�o��s����

#include <stdio.h>
int a[50];

int main()
{
    a[0] = 0;
    a[1] = 1;
    ///�ƾ��k�Ǫk, a[0] a[1] �n����,�~��۰��~��
    for(int i=2; i<45; i++){ ///�]���Ӥj�|�z��!!
        a[i] = a[i-1] + a[i-2];
    }

    for(int i=0; i<45; i++){
        printf("%d ", a[i] );
    }
}
