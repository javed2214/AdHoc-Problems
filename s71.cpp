// https://leetcode.com/problems/valid-parentheses/

class Solution {

public:
    
    int checkP(char ch){
        if(ch=='(' or ch=='[' or ch=='{') return 1;
        return 0;
    }
    
    int getAns(char ch1, char ch2){
        
        if(ch1=='(' and ch2==')') return 1;
        if(ch1=='[' and ch2==']') return 1;
        if(ch1=='{' and ch2=='}') return 1;
        return 0;
    }
    
    bool isValid(string s) {
        
        char ch,temp;
        int o=0,c=0;
        stack <char> S;
        for(int i=0;i<s.length();i++){
            ch=s[i];
            if(checkP(ch)){
                S.push(ch);
                o++;
            }else{
                if(!S.empty()){
                    temp=S.top();
                    S.pop();
                    c++;
                    if(!getAns(temp,ch))
                        return false;
                }else return false;
            }
        }
        if(o==c) return true;
        return false;
    }
};