///Week06-1.cpp step01-1 �F���ɮת���X��J
#include <stdio.h>

int main()
{
    ///step01-1 �ɮת�����,�n�}���ɮ�
    FILE *fout = fopen("output.txt","w+");
    ///printf("Hello World\n");
    //for(int i=0; i<100; i++){
        fprintf(fout, "Hello World\n");
    //}
}
