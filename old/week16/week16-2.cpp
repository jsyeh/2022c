///�F�Ѧr��������禡
#include <stdio.h>
#include <string.h> ///�r�����
int main()
{
    char line[20]="Hello";
    int N = strlen(line);
       ///  str: string
           /// len: length
    printf("Hello�r�ꪺ����:%d\n", N);

    char line2[20];
    strcpy( line2, line );/// ��k��copy�쥪�� �f�Z: a=10
    printf("line2 �o��: %s\n", line2);

    printf("����r�� strcmp(line, line2) �o�� %d\n", strcmp(line, line2) );
}
