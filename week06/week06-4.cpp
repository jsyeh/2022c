///�ɤO�k���I�C �Q�n�� 1����!!!
///�ꤤ�N���|�Ъ��u����۰��k�v
#include <stdio.h>
int main()
{
    printf("�п�J2�ӼƦr: ");
    int a, b, c; ///�j,��,�p
    scanf("%d %d", &a, &b);

    while(1){ ///�@����
        c = a%b;///�p a��b �o��l��
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break; ///���}�j�� ���}
        a = b; ///�j�G�ܦѤj
        b = c; ///�ѤT�ܦѤG
    }
    printf("�����O:%d", b);
}
