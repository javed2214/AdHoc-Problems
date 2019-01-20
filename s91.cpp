// https://leetcode.com/problems/edit-distance/

class Solution {
public:
    
    int editDistance(string s1, string s2, int l1, int l2){
        
        int dp[l1+1][l2+1];
        for(int i=0;i<=l1;i++){
            for(int j=0;j<=l2;j++){
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
        }
        return dp[l1][l2];
    }
    
    int minDistance(string word1, string word2) {
    	
        int m=word1.length();
        int n=word2.length();
        
        return editDistance(word1,word2,m,n);
    }
};