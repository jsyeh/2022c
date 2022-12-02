#include <stdio.h>
int a[30];

int main()
{
	int N;
	for(int i=0;  ; i++){
		scanf("%d", &a[i]);
		if(a[i]<0){
			N = i;
			break;
		}
		if(a[i]>100) i--;
	}

	float sum=0;
	for(int i=0; i<N; i++){
		sum+=a[i];
	}
	float average = sum / N;

	int up=0;
	for(int i=0; i<N; i++){
		if( a[i]>average) up++;
	}

	printf("%.2f %d", average, up);
}
