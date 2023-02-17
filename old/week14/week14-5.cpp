///輾轉相除法
///最大公因數 greatest common divisor/divider
#include <stdio.h>
int gcd( int a, int b )
{
    printf("%d %d\n", a, b);
    if( a==0 ) return b;
    if( b==0 ) return a;

    return gcd( b, a%b );
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = gcd( a, b );
    printf("%d", ans);
}
