///2�� => 2�ص��G
///3�� => 6�ص��G
///4�� => 24�ص��G
///5�� => 120�ص��G

#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if( a>=b && b>=c ) printf("max:%d\nmid:%d\nmin:%d", a, b, c);
	else if( a>=c && c>=b ) printf("max:%d\nmid:%d\nmin:%d", a, c, b);
	else if( b>=a && a>=c ) printf("max:%d\nmid:%d\nmin:%d", b, a, c);
	else if( b>=c && c>=a ) printf("max:%d\nmid:%d\nmin:%d", b, c, a);
	else if( c>=a && a>=b ) printf("max:%d\nmid:%d\nmin:%d", c, a, b);
	else if( c>=b && b>=a ) printf("max:%d\nmid:%d\nmin:%d", c, b, a);
}
