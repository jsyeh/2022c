///Week05-2.cpp step02-1
///LeetCode 9. Palindrome Number
#include <stdio.h> //不用寫main()因為題目裡偷放
bool isPalindrome(int x){
    if(x<0) return false;

    //x:1234567   r:0
    //        7     7 = 0*10  +7
    //       6     76 = 7*10  +6
    //      5     765 = 76*10 +5
    //     4     7654 = 765*10+4
    int r=0, x2=x;///x的分身x2, 因為x會剝皮剝光光
    ///之後要把 r 改成 long long int r = 0;
    while(x>0){ //剝皮法
        r = r*10 + x%10;//取出x的個位數 (剝皮)
        printf("x:%d r:%d\n", x, r);

        x = x /10;

    }
    ///如果倒過來的結果r
    if(r==x2) return true;
    else return false;
}
int main()
{
    isPalindrome(121);
}
