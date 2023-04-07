#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a1[10] = {9,8,7,1,2,3,6,5,4,0};
    vector<int> a2(a1, a1+10);
    ///你可以把傳統的陣列,轉成C++的vector

    sort(a1, a1+10); ///這個也可以排序 傳統陣列
    sort(a2.begin(), a2.end()); ///step02-1b 排序 新vector

    for(int i=0; i<10; i++){
        printf("%d ", a2[i] );
    }
}
