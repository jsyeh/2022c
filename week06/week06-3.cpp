/// 51/68 ����
///�ɤO�k
#include <stdio.h>
int main()
{
    printf("�п�J2�Ӽ�: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    ///i ��1......51�����Ӻ�
    for(int i=1; i<=a; i++){ ///i:1....51
        if( a%i==0 && b%i==0) ans=i;
    }   /// ���㰣    ���㰣  ��쵪��
    printf("���ans:%d", ans);
}
