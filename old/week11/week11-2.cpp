///�T�ƱƧ�
///�f�Z: ��j�p,����N�洫
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70;
    if( a>b ){///�Ʊ�a��,���ϹL�ӤF
        int temp=a;///����N�洫
        a=b;
        b=temp;
    }
    if( b>c ){
        int temp=b;
        b=c;
        c=temp;
    }
    ///��̭������c�F�C�ѤU �W����ab�A��@��
    if( a>b ){
        int temp=a;///����N�洫
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d", a, b, c);
}
