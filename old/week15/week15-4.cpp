///�r��ϦL (�ϹL�ӦL) (�Q�Q��,�ʼƤϦL,�ٰO�o��?)
/// ABCDE �L�X EDCBA         for(int i=99; i>=0; i--) �ϹL�Ӫ��j��
/// 1234567 �L�X 7654321
#include <stdio.h>
char line[3000]; ///�~���ŧi�}�C,�i�H���
int main()
{
    printf("�п�J�@��r��,���n���Ů�@: ");///�o��Ҹդ��μg

    scanf("%s", line);
    ///printf("%s", line);

    int N=0;
    for(int i=0; line[i]!=0; i++){ ///�r�ꪺ�j��
        N++;
    }///�A�b��,���X�Ӧr���b�A���r��̭�!

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i] );
    }
}
