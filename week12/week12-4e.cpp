//(SOIT106_ADVANCE_005_C) 進階題：A的B次方函數 :
#include <stdio.h>

int MYPOWER(int a, int b)
{
	int ans=1;
	for(int i=1; i<=b; i++){
		ans = ans * a;
	}
	return ans;
}


int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
