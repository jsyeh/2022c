///Week01-4.cpp step02-3
#include <stdio.h>
#include <string.h> ///for strlen()
int main()
{


	char line[40]; ///�r��,�N�O�r���}�C
	scanf("%s", line);

	//printf("\n%s\n", line);

	int ans=0;
	int N = strlen(line);
	for(int i=0; i<N; i++){ ///�}�C�t�j��
		if( line[i] == '2' ) ans++;
	}        ///�p�� == �ѥ���j�p, ����g = �]��
	//printf("\n%s\n", line);
	printf("%d\n", ans);
}
