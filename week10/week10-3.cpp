///LeetCode 136: Single Number
int singleNumber(int* nums, int numsSize){
    int ans=0;
    for(int i=0; i<numsSize; i++){
        ans = ans ^ nums[i]; //XOR�B��,�ܯ��_,�i�H��ۦP����0,�u�d�U���P��
    }
    return ans;
}
/*
///XOR������ https://en.wikipedia.org/wiki/XOR_swap_algorithm
#include <stdio.h>
int main()
{
    int a = 10, b = 99;
    a^=b;
    b^=a; ///b�ܦ�a
    a^=b; ///a�ܦ�b
    //int temp=a;
    //a=b;
    //b=temp;
    printf("%d %d", a, b);
}
*/
