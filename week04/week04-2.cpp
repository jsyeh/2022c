///Week04-2.cpp step02-1 �����ܼ� pointer
#include <stdio.h>
int main()
{
    int a = 10;
    printf("a�b����? %d\n", &a);

    int *p = &a;

    printf("����p�߸̩񪺭ȬO&a �]�N�O%d\n", p);
    printf("p���쪺���@�Ӳ��l���ȬO:%d\n", *p );
}
