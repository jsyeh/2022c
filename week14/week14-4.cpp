///����۰��k

#include <stdio.h>
int main()
{
    int a, b, c;///�Ѥj�B�ѤG�B�ѤT
    scanf("%d%d", &a, &b);

    while(1){
        c = a%b; ///�o��ѤT
        printf("%d %d %d\n", a, b, c);

        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
