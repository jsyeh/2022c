///(SOIT106_BASE_005) ��¦�D�G�]�ƭӼ� : ��J�@�ӥ���ơA��ܩҦ��ӥ���Ʀ]�ƪ��ӼơC
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans=0;
	for(int i=1; i<=n; i++){
		if( n%i == 0 ) ans ++;
	}

	printf("%d\n", ans);
}
