///Week03-2 Palindrome (CPE���P�s��-�@���P(��))
///step03 �u�ѨM�j��/�^��,��Ū�B��Ū,���@��
/// for�j��,�e����᭱ vs. �᭱��e��
#include <stdio.h>
#include <string.h> ///strlen()
int main()
{
	char line[30];

	scanf("%s", line);

	int N = strlen(line);
	int bad=0;
	for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad=1;
	}
	if(bad==1) printf("�����O�j��\n");
	else printf("���O�j��\n");
}
