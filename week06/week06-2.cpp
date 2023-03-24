///Week06-2.cpp step02-1 再試試 scanf() 前面加f
#include <stdio.h>
int main()
{
 ///FILE *fout = fopen("output.txt", "w+");///write
    FILE * fin = fopen("output.txt", "r"); ///read

 ///for(int i=0; i<100; i++){
 ///    fprintf(fout, "Hello World\n");
 ///}
    char line[3000];
    fscanf(fin, "%s", line);
    printf("你讀到了%s\n", line);

    fscanf(fin, "%s", line);
    printf("你讀到了%s\n", line);
}
