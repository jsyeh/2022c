///(SOIT106_ADVANCE_001) �i���D�G�ϧǼƦr :
/// ��J1�ӥ���ơA�N�Ӿ�ƩҦ��Ʀr�ϧǱƦC��զ��@�Ӫ��s��ơA
//�p��X��̬ۥ[�����G�C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int n2 = n;

	int ans = 0;
	while(n>0){
		ans = ans * 10 + n%10;
		n = n / 10;
	}

	printf("%d+%d=%d\n", n2, ans, n2+ans);
}
