///�Q���x�}���k,���e�n���|...�x�}�[�k
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d", &n);//3

	for(int i=0; i<n; i++){ //����i
		for(int j=0; j<n; j++){//�k��j
			scanf("%d", & a[i][j] );
		}//�� a[i][j] Ū�i��
	}
	//(a b ����X��)
	for(int i=0; i<n; i++){ //����i
		for(int j=0; j<n; j++){//�k��j
			scanf("%d", & b[i][j] );
		}//�� b[i][j] Ū�i��
	}

	for(int i=0; i<n; i++){ //����i
		for(int j=0; j<n; j++){//�k��j
			c[i][j] = a[i][j] + b[i][j];
		} //�x�}�[�k
	}

	for(int i=0; i<n; i++){ //����i
		for(int j=0; j<n; j++){//�k��j
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}
