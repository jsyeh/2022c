///LeetCode 191: Numbers of 1 Bits 有幾個1
///使用剝皮法,慢慢把皮剝下來
int hammingWeight(uint32_t n) {
    int ans = 0;
    while(n>0){ ///數字還沒剝完,就繼續做
        if(n%2==1) ans++; ///剝一層皮,看是不是1
        n = n / 2; ///數字又變更小了
    }
    return ans;
}
//剝皮法
/*1234
   4
123
  3
12
 2
1

0
*/
