///Week04-1.cpp step01-1 �Q�n�z��
///step01-1_���g�D�D�Opointer����,
///�b�ҥ�����4��, �Ϲ����N��,�O�����ܼ�, �߸̩񪺭ȬO��}�B��}, �n�g���n�h���ݭ��̡C
///�ڭ̥��F���ܼƪ�4�ӯS�� int a = 10; ���O�N��e3�өʽ�(�Ϊ��B�W�r�B��),
///&a �h�N���4�өʽ�(���b���̡B��}�B��m)
#include <stdio.h>
int main()
{
    int a = 10;
    printf("a���ȬO%d\n", a);
    printf("a���a�b%d\n", &a);

    int b = 20;
    printf("b���ȬO%d\n", b);
    printf("b���a�b%d\n", &b);

    int c = 30;
    printf("c���ȬO%d\n", c);
    printf("c���a�b%d\n", &c);
}
