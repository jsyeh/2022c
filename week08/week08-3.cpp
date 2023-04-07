///Week08-3.cpp 結合 week08-1 week08-2 配上 push_back()
#include <stdio.h>
#include <vector>
#include <algorithm>///step02-1b 排序
using namespace std;
int main()
{
    vector<int> a(2);
    a[0] = 100;
    a[1] = 101;
    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] );
    }
    printf("現在的 a 的大小是: %d\n", a.size() );

    a.push_back(102); ///神奇進階版的陣列
    a.push_back(103); ///可以伸縮,越來越長
    a.push_back(0);

    sort(a.begin(), a.end()); ///step02-1b 排序

    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] );
    }
    printf("現在的 a 的大小是: %d\n", a.size() );
}
