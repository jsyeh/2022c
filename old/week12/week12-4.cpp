///想做矩陣乘法,之前要先會...矩陣加法
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	scanf("%d", &n);//3

	for(int i=0; i<n; i++){ //左手i
		for(int j=0; j<n; j++){//右手j
			scanf("%d", & a[i][j] );
		}//把 a[i][j] 讀進來
	}
	//(a b 不能合併)
	for(int i=0; i<n; i++){ //左手i
		for(int j=0; j<n; j++){//右手j
			scanf("%d", & b[i][j] );
		}//把 b[i][j] 讀進來
	}

	for(int i=0; i<n; i++){ //左手i
		for(int j=0; j<n; j++){//右手j
			c[i][j] = a[i][j] + b[i][j];
		} //矩陣加法
	}

	for(int i=0; i<n; i++){ //左手i
		for(int j=0; j<n; j++){//右手j
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}
