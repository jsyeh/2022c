#include <stdio.h>
int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0};

int main()
{

    for(int i=0; i<10; i++) printf("%d ", a[i] );///�L�X��
    printf("\n");

    for(int k=0; k<10-1; k++){

        for(int i=0; i<10-1; i++){ ///���@��
            if( a[i] > a[i+1] ){ ///�Ʊ楪�p�k�j,������....
                int temp = a[i]; ///����N�洫
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i] );///�L�X��
        printf("\n");

    }
}
