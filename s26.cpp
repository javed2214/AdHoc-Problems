// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/?ref=similar_problems

// You are given a string. The only operation allowed is to insert characters in the beginning of the string.
// How many minimum characters are needed to be inserted to make the string a palindrome string
// Example:
// Input: ABC
// Output: 2
// Input: AACECAAAA
// Output: 2

#include<bits/stdc++.h>
using namespace std;

int solve(string str) {
    
    string s=str;
    int len1=s.length();
    int len2=len1;
    reverse(s.begin(),s.end());
    if(s==str) return 0;
    int i,g;
    for(int i=0;i<str.length();i++){
        if(s.substr(i)==str.substr(0,len1-i)){
            g=(s.substr(i)).length();
            break;
        }
    }
    return (len1-g);
}


int main(){
	string str="AACECAAAA";
	cout<<solve(str);

	return 0;
}