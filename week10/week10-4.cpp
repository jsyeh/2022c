///LeetCode 191: Numbers of 1 Bits ���X��1
///�ϥέ�֪k,�C�C��֭�U��
int hammingWeight(uint32_t n) {
    int ans = 0;
    while(n>0){ ///�Ʀr�٨S�駹,�N�~��
        if(n%2==1) ans++; ///��@�h��,�ݬO���O1
        n = n / 2; ///�Ʀr�S�ܧ�p�F
    }
    return ans;
}
//��֪k
/*1234
   4
123
  3
12
 2
1

0
*/
