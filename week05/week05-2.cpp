///Week05-2.cpp step02-1
///LeetCode 9. Palindrome Number
#include <stdio.h> //���μgmain()�]���D�ظ̰���
bool isPalindrome(int x){
    if(x<0) return false;

    //x:1234567   r:0
    //        7     7 = 0*10  +7
    //       6     76 = 7*10  +6
    //      5     765 = 76*10 +5
    //     4     7654 = 765*10+4
    int r=0, x2=x;///x������x2, �]��x�|��֭����
    ///����n�� r �令 long long int r = 0;
    while(x>0){ //��֪k
        r = r*10 + x%10;//���Xx���Ӧ�� (���)
        printf("x:%d r:%d\n", x, r);

        x = x /10;

    }
    ///�p�G�˹L�Ӫ����Gr
    if(r==x2) return true;
    else return false;
}
int main()
{
    isPalindrome(121);
}
