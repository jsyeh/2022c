#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int a1[10] = {9,8,7,1,2,3,6,5,4,0};
    vector<int> a2(a1, a1+10);
    ///�A�i�H��ǲΪ��}�C,�নC++��vector

    sort(a1, a1+10); ///�o�Ӥ]�i�H�Ƨ� �ǲΰ}�C
    sort(a2.begin(), a2.end()); ///step02-1b �Ƨ� �svector

    for(int i=0; i<10; i++){
        printf("%d ", a2[i] );
    }
}
