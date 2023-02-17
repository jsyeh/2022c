///輾轉相除法

#include <stdio.h>
int main()
{
    int a, b, c;///老大、老二、老三
    scanf("%d%d", &a, &b);

    while(1){
        c = a%b; ///得到老三
        printf("%d %d %d\n", a, b, c);

        if(c==0) break;

        a = b;
        b = c;
    }
    printf("%d", b);
}
