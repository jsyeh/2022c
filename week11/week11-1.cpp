///LeetCode 1046 �̫᪺���Y
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
        stones[aI] = 0; //�̤j�����@��,�M��0, �̤j�ȴN�����F
        int b = stones[0], bI=0;
        for(int i=0; i<N; i++){
            if(stones[i]>b){//��ѤU�̭����̤j��
                b = stones[i];
                bI = i;
            }
        }
        stones[bI] = 0;//��ѤU�̭����̤j��, �]����
        if(a==0 && b==0) return 0;
        if(a!=0 && b==0) return a;
        stones[aI] = a-b; //�̤j��,���ĤG�j��,�ѤU����^ aI ���@��
    }
    return 0;
}
    //printf("a: %d b:%d\n", a, b);
    //���G�L�X�Ӫ� a b ���O 8 .... �n���X�Ӫ����Y����m,�M0
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

