///Week08-1.cpp 想要認識 vector
#include <stdio.h>
#include <vector> ///step01-1
///using namespace std; ///可省 std::
int main()
{
    std::vector<int> a(3); ///也可說準備好3格
    ///不知道大小沒關係,可用 push_back加大

    a[0] = 100; ///陣列的使用
    a[1] = 101;
    a[2] = 102;
    for(int i=0; i<3; i++){
        printf("%d ", a[i] );
    }        ///陣列的使用
}
