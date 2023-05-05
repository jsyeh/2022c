//LeetCode 1456. Maximum Number of Vowels in a Substring of Given Length
int maxVowels(char * s, int k){
    char vowel[5]={'a','e','i','o','u'};

    int ans=0, len=0;
    int N = strlen(s);
    for(int i=0; i<N; i++){
        if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            len++;
        }else{
            if(len>ans) ans = len;
            len=0;
        }
    }
    if(len>ans) ans = len;
    if(ans>k) return k;
    else return ans;
}
