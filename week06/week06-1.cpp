///Week06-1.cpp step01-1 了解檔案的輸出輸入
#include <stdio.h>

int main()
{
    ///step01-1 檔案的指標,要開啟檔案
    FILE *fout = fopen("output.txt","w+");
    ///printf("Hello World\n");
    //for(int i=0; i<100; i++){
        fprintf(fout, "Hello World\n");
    //}
}
