///Week01-5.cpp step03-1
#include <stdio.h>
#include <string.h> //for strlen()
int main()
{

	char line[40]; //�r��,�N�O�r���}�C
	int total=0;
	while( scanf("%s", line)==1 ){
//�p�Gscanf()���\Ū�J1�����, �N����
		int ans=0;
		int N = strlen(line);
		for(int i=0; i<N; i++){ //�}�C�t�j��
			if( line[i] == '2' ) ans++;
		}
		printf("%d\n", ans);
		total += ans;
	}
	printf("Total: %d\n", total);
}
