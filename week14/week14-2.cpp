///��ƪ��ܼƽd��
#include <stdio.h>

int a=10; ///Global���@�� �����ܼ�

void func()
{
    int a = 20; ///local �ϰ��ܼ�
    printf("func()�̪�a�O:%d\n", a);
    a = 30;
    printf("func()�� a�令:%d\n", a);
}
int main()
{
    ///�̭��S��,�|�Υ~���� a
    printf("main()�� a�O:%d\n", a);
    func();
    printf("main()�� a�O:%d\n", a);
}
