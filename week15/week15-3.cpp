///�Q�F�ѳo�� �r��/�r��(��޸�) vs. �r��(���޸�,�Ƽ�)
#include <stdio.h>
int main()
{
    printf("=%c=%d=\n", 65, 65);
    printf("=%c=%d=\n", '+', '+');
    printf("=%c=%d=\n", '\n', '\n');
    printf("=%c=%d=\n", '\t', '\t');
    printf("=%c=%d=\n", '\0', '\0'); ///���N�O 0

    char line[] = "Hello World AAA"; ///�r��, �S�s �r���}�C
    ///�Ω_�Ǫ��j��,��r���,�C�@�Ӧr���L�X��

    int N=0;///�@�}�l�٨S�L�r��
    for(int i=0;       ; i++){ ///�����D�j��n�]�h�[
        char c = line[i];
        if( c == 0 ) break; ///�p�G�J��r�굲���� 0 �N����
        printf("=%c", c );
        N++; ///�h�L�X�@�Ӧr��
    }
    printf("\n�A�L�F%d�r��\n", N);
}
