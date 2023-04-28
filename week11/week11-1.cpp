///LeetCode 1046 最後的石頭
int lastStoneWeight(int* stones, int N)
{
    while(1){
        int a=stones[0], aI=0;
        for(int i=0; i<N; i++){
            if(stones[i]>a){
                a = stones[i];
                aI = i;
            }
        }
        stones[aI] = 0; //最大的那一格,清為0, 最大值就不見了
        int b = stones[0], bI=0;
        for(int i=0; i<N; i++){
            if(stones[i]>b){//找剩下裡面的最大值
                b = stones[i];
                bI = i;
            }
        }
        stones[bI] = 0;//找剩下裡面的最大值, 也不見
        if(a==0 && b==0) return 0;
        if(a!=0 && b==0) return a;
        stones[aI] = a-b; //最大的,撞第二大的,剩下的放回 aI 那一格
    }
    return 0;
}
    //printf("a: %d b:%d\n", a, b);
    //結果印出來的 a b 都是 8 .... 要把找出來的石頭的位置,清0
// 2 7 4 1 8 1
//   b     a
// 2 0 4 1 1 1
// b   a
// 0 0 2 1 1 1
//     a b
// 0 0 1 0 1 1
//     a   b
// 0 0 0 0 0 1
    //int a = ???;
    //int b = ???;
    //(a-b)

