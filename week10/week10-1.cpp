///LeetCode 1768: Merge String Alternatively, C Language
///指標就是陣列,陣列就是指標
char * mergeAlternately(char * word1, char * word2){
    char * ans = (char*) malloc(201);//準備memory放答案

    int N1 = strlen(word1);
    int N2 = strlen(word2);

    int N=0;
    for(int i=0; i<200; i++){
        if(i<N1) ans[N++] = word1[i];
        if(i<N2) ans[N++] = word2[i];
    }
    ans[N] = 0;//字串結尾

    return ans;
}
