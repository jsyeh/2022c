///Week08-1.cpp �Q�n�{�� vector
#include <stdio.h>
#include <vector> ///step01-1
///using namespace std; ///�i�� std::
int main()
{
    std::vector<int> a(3); ///�]�i���ǳƦn3��
    ///�����D�j�p�S���Y,�i�� push_back�[�j

    a[0] = 100; ///�}�C���ϥ�
    a[1] = 101;
    a[2] = 102;
    for(int i=0; i<3; i++){
        printf("%d ", a[i] );
    }        ///�}�C���ϥ�
}
