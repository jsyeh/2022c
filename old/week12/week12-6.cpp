///step03-3_��ӤS�h���Ы���x�}��180�ת���k,���j�a�Ѧ�
#include <stdio.h>
int a[20][20];

int main()
{
	int M, N;
	scanf("%d%d", &M, &N);

	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			scanf("%d", & a[i][j] );
		}
	}

	printf("\n");
	for(int i=M-1; i>=0; i--){
		for(int j=N-1; j>=0; j--){
			printf("%2d ", a[i][j] );
		}
		printf("\n");
	}
}
