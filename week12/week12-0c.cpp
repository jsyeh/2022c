///(SOIT106_BASE_010) ��¦�D�G�䭿�� :
///�s��Ū�J10�Ӿ��(1 �V 1000)�A��X��Ū�J����Ʀ��X�ӬO3�����ơC
#include <stdio.h>
int main()
{
	int ans=0;
	int n;
	for(int i=0; i<10; i++){
		scanf("%d", &n);
		if(n%3==0) ans++;
	}
	printf("%d\n", ans);
}
