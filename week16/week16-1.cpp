///�F�� scanf()���Ӹ`
#include <stdio.h> ///Wait!!! �u�����o���ɮ�
int main()
{
    char line[300];
    ///scanf("%s", line ); ///Q: ������S�[ &
    char * p = line;
///���
    int n=10;///�ȬO 10  ��3�өʽ�, ��4�өʽ� &n ��m/�a�}
    ///�W�r
    int *p2 = &n;

    float f=3.1415926;
    float *p3 = &f;
    /// scanf("%d", &n);
    char c='A';
    char *p4 = &c;
}///�ЦP��,��{�� copy �� C Tutor Python �n����, �ݥ������G
