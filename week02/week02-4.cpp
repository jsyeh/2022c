//Week02-4.cpp step02-2 C++
#include <iostream> //#include <stdio.h>

int main()
{
	long long int a, b;

	while( std::cin >> a >> b ){
	//while( scanf("%lld%lld", &a, &b) == 2 ){
		long long int ans = a - b;
		if(ans<0) ans = b - a;
		//printf("%lld\n", ans);
		std::cout << ans << std::endl;
	}
}
/*#include <stdio.h>
int main()
{
    ///32�줸 �i�J 64�줸, �o�� Intel AMD����
    ///x64 x86 �{���i���۬ۮe (int�� 32�줸)
    ///42,9496,7296 42��
/// �ܪ��ܪ������ ��� long long int
    long long int a, b;
    scanf("%lld%lld", &a, &b);
    ///�O L L D ���p�g, ���O�Ʀr 1 1 D
    printf("%lld %lld\n", a, b);
}

*/
