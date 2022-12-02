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
	}

	int good=0;
	float sum=0;
	for(int i=0; i<N; i++){
		if(a[i]<=100){
			sum+=a[i];
			good++;
		}
	}
	float average = sum / good;

	int up=0;
	for(int i=0; i<N; i++){
		if( a[i]>average && a[i]<=100) up++;
	}

	printf("%.2f %d", average, up);

}
