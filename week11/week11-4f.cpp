///(SOIT106_BASE_008) ��¦�D�G��ƶ��i�Q5�㰣����� : ��J��Ӿ�ơA��X��Ƥ����Ҧ��i�H�Q5�㰣����ơC
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}

	for(int i=a; i<=b; i++){
		if(i%5==0) printf("%d\n", i);
	}

}
