///LeetCode 1572 �﨤�usum, �������୫�Х[�@!
int diagonalSum(int** mat, int matSize, int* matColSize){
    int N = matSize; //�Ʊ�Τ���u���ܼ�, ����n�g

    int sum = 0;
    for(int i=0; i<N; i++){
        sum += mat[i][i];  //²�檺�﨤�u
        sum += mat[i][N-1-i]; //�ϹL�Ӫ��﨤�u
    }
    if(N%2==1) sum -= mat[N/2][N/2]; //�|���Ъ��_��, ���^��
    return sum;
}
