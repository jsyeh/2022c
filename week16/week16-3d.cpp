///SLJ-Function-002�G������ƭp��n��m���զX��
///(SLJ-Function-002) ������ƭp��n��m���զX�� :
///�г]�p�@�ӭp��n!��� fact, �t�X�D�{���ӭp��n��m���զX��.
///��: n��m���զX�Ƭ� (1) n!/(m!*(n-m)!), 0<=m<=n (2) 0 , ��L
///��. 4 2 6 ��. 5 3 10 ��. 4 -1 0

#include <stdio.h>
int fact(int n)
{
	int ans=1;
	for(int i=1; i<=n; i++){
		ans *= i;
	}
	return ans;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	if(0<=m && m<=n) {
		int ans = fact(n)/ (fact(m)*fact(n-m));
		printf("%d", ans);
	} else {
		printf("0");
	}
}
