///LeetCode 1572 對角線sum, 中間不能重覆加哦!
int diagonalSum(int** mat, int matSize, int* matColSize){
    int N = matSize; //希望用比較短的變數, 比較好寫

    int sum = 0;
    for(int i=0; i<N; i++){
        sum += mat[i][i];  //簡單的對角線
        sum += mat[i][N-1-i]; //反過來的對角線
    }
    if(N%2==1) sum -= mat[N/2][N/2]; //會重覆的奇數, 扣回來
    return sum;
}
