///Week08-3.cpp ���X week08-1 week08-2 �t�W push_back()
#include <stdio.h>
#include <vector>
#include <algorithm>///step02-1b �Ƨ�
using namespace std;
int main()
{
    vector<int> a(2);
    a[0] = 100;
    a[1] = 101;
    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] );
    }
    printf("�{�b�� a ���j�p�O: %d\n", a.size() );

    a.push_back(102); ///���_�i�������}�C
    a.push_back(103); ///�i�H���Y,�V�ӶV��
    a.push_back(0);

    sort(a.begin(), a.end()); ///step02-1b �Ƨ�

    for(int i=0; i<a.size(); i++){
        printf("%d ", a[i] );
    }
    printf("�{�b�� a ���j�p�O: %d\n", a.size() );
}
