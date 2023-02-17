#include <stdio.h>
#include <string.h> ///¦r¦ê¥~±¾
char line[3000];
int main()
{


    scanf("%s", line);

    int N = strlen(line);
    ///    ¦r¦êªø«×




    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
