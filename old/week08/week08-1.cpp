///step01-1.cpp ��߽ҭn�W���ҤF�C���{���I�F�]�S��, �]���Ҹշ|�I���C
///�ҥH�n����Ҫ��覡�ӸѨM�C���ѧ��ߪ��D�خ������ѡu���Q�X�Ӫ��v
///���Ѫ��j�]���O 2�� while�j�� �ӵe�X�����T����(���Ů�B���P�P)
///�ҥH���� for�j��ӫ�ҡC�i�H�� 3��for�j��, �ܦn��ҡC���O�u��2��for�j���,
///�f�Z�O����e�X����ΡC
///�A�Ӫ�����, �O�Ů榳�X�ӡC�Ů榳n-i�ӡC�ҥH �� if�g�X��, ���߮ɦL�Ů�, else�L�P�P,����
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		for(int k=1; k<=n; k++){
			if( k<= n-i )  printf(" ");
			else printf("*");

		}
		printf("\n");
	}

}
///only two for
///�f�Z: ���諬

