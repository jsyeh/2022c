///�P�_�Y�Ӽ�,�O���O���?
/// (�Y��) ����Q �����B����Q �㰣
///�ϹL�ӻ�,�u�n�i�Q�����B�i�Q�㰣, ��! �@�w���O (�^�Q)

#include <stdio.h>
int main()
{
    printf("�n�P�_�A��J���Ʀr�O���O�ܩt�W�����:");
    int n;
    scanf("%d", &n);

    int bad=0;/// 0:�٨S�a��, 1:�N���a���F
    for(int i=2; i<n; i++){ ///i�h�իܦh�Ʀr,�ݯण��^�Qn
        if( n%i==0 ) bad=1;///�z,���F �Q�㰣
    }
    if(bad==0) printf("%d �O���(�S���a��)", n);
    else printf("%d ���O���(���N�a���F)", n);
}
