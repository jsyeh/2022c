///Week08-5a (SOIT107_ADVANCE_012)
///進階題：星星等腰三角 : 輸入1個正整數n，作為輸出星星三角的層數
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){

		int space=n-i, star=i*2-1;
		//printf("%d %d ", space, star);
		//printf("%d\n", i);
		for(int k=1; k<=space; k++) printf(" ");
		for(int k=1; k<=star; k++) printf("*");
		printf("\n");
	}
}
