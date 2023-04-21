///LeetCode 136: Single Number
int singleNumber(int* nums, int numsSize){
    int ans=0;
    for(int i=0; i<numsSize; i++){
        ans = ans ^ nums[i]; //XOR運算,很神奇,可以把相同的變0,只留下不同的
    }
    return ans;
}
/*
///XOR的妙用 https://en.wikipedia.org/wiki/XOR_swap_algorithm
#include <stdio.h>
int main()
{
    int a = 10, b = 99;
    a^=b;
    b^=a; ///b變成a
    a^=b; ///a變成b
    //int temp=a;
    //a=b;
    //b=temp;
    printf("%d %d", a, b);
}
*/
