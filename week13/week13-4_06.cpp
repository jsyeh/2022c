//(SOIT108_Base_006) ��¦�D�G��J�褸y�~�A�P�_��y�~�O�_���|�~ :
//��J�褸y�~�A�P�_��y�~�O�_���|�~�A��X�۹�T���C
//{�|�~�w�q�G�褸�~�����H4�i�㰣�A�B���H100���i�㰣�A���|�~�C
//�褸�~�����H100�i�㰣�A�B���H400���i�㰣�A�����~}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int leap = 0;
	if(n%400==0) leap = 1;
	else if(n%100==0) leap = 0;
	else if(n%4==0) leap = 1;
	else leap =0;

	if(leap==1) printf("%d is a leap year.\n", n);
	else printf("%d is not a leap year.\n", n);
}
