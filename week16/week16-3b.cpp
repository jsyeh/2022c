///H10111402�GFunction-����Ʀr
///(H10111402) Function-����Ʀr :
///�м��g�@�禡(Fun)�A�Ǧ^��ưѼƭȪ�����C
///�|��: �ѼƬ�9876�A����ᬰ6789�C
///�ѼƬ�98765�A����ᬰ0�C
///(�`�N:��J���Ȥ���1~9999�A�W�L�Ц^��0)

/*�Цb1��9999��J�@�ӼƦr:�Ʀr���ର:*/
#include <stdio.h>
void calc(int n)
{
	if(n<1 || n>9999) printf("0\n");
	else{ //��֪k
		while( n>0 ){
			printf("%d", n%10 );;
			n = n / 10;
		}
		printf("\n");
	}
}
int main()
{
	printf("�Цb1��9999��J�@�ӼƦr:�Ʀr���ର:");

	int n;
	scanf("%d", &n);

	calc( n );
}
