///(SOIT106_BASE_004) ��¦�D�G�p�{����p�� :
///��J���{���ؼơA��X���I������C�p�{����p��覡���G�_��100 ��(2000����)�A���5��(�C500����)�C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans;

	if(n<=2000) ans = 100;
	else {
		if(n%500==0) ans = 100 + (n-2000)/500*5;
		else ans = 100 + (n-2000)/500*5 + 5;
		//���㰣���ɭ�, �|�h����@��5��,�߫ܵh
	}
	printf("%d\n", ans);

}
