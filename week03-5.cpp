///�Y�����
///��8���l6
///��9���l7
///��15���l13
///Step01: ���L�X�l�� Step02�թҦ����Ʀr
#include <stdio.h>
int main()
{
    for( int n=1; n<2000; n++ ) { ///�|�իܦh�Ʀr
        if( n%8==6 && n%9==7 && n%15==13 ) {
            printf("\n�{�b���Ʀr�O:%d\n", n);
            printf("��8���l%d\n" , n%8 );
            printf("��9���l%d\n" , n%9 );
            printf("��15���l%d\n" , n%15 );
        }
    }
}
