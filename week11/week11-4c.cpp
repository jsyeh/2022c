/// (SOIT106_BASE_003) ��¦�D�GN�Ƥ��M : ��J�@�Ӿ��N�A����Ū�JN�Ӿ�ơA�п�X��M�C
//for loop
#include <stdio.h>
int main()
{
	int N, a;
	scanf("%d", &N);

	int sum = 0;
	for(int i=0; i<N; i++){
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);
}
