///LeetCode 1768: Merge String Alternatively, C++ Language

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans; //這樣就準備好記憶體了,而且伸縮自如
        for(int i=0; i<100; i++){
            if(i<word1.length()) ans += word1[i];
            if(i<word2.length()) ans += word2[i];
        }
        return ans;
    }
};
