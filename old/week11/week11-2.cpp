///三數排序
///口訣: 比大小,不對就交換
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70;
    if( a>b ){///希望a輕,但反過來了
        int temp=a;///不對就交換
        a=b;
        b=temp;
    }
    if( b>c ){
        int temp=b;
        b=c;
        c=temp;
    }
    ///把最重的放到c了。剩下 上面的ab再比一次
    if( a>b ){
        int temp=a;///不對就交換
        a=b;
        b=temp;
    }
    printf("a:%d b:%d c:%d", a, b, c);
}
