//(SOIT106_ADVANCE_004) �i���D�G�j�p�g�ഫ :
//Ū�J�@�Ӧr��(�ܦh10�Ӧr��)�A�N�r�ꤤ���j�p�g�^��r���ۤ��ഫ
//(�j�g�ର�p�g�A�p�g�ର�j�g)���X�C

#include <stdio.h>
int main()
{
	char line[20];
	scanf("%s", line);

	for(int i=0; line[i]!=0; i++){
		char c = line[i];
		if(c>='A' && c<='Z') line[i]=c-'A'+'a';
		if(c>='a' && c<='z') line[i]=c-'a'+'A';
	}
	printf("%s\n", line);
}
