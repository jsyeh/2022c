#include <stdio.h>
#include <string.h> ///�r��~��
char line[3000];
int main()
{


    scanf("%s", line);

    int N = strlen(line);
    ///    �r�����




    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
