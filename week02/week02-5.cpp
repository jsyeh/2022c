///Week02-5.cpp step02-3 ¨Ï¥Î namespace
///Week02-4.cpp step02-2 C++
#include <iostream>
using namespace std;
int main()
{
	long long int a, b;

	while( cin >> a >> b ){
		long long int ans = a - b;
		if(ans<0) ans = b - a;
		cout << ans << endl;
	}
}
