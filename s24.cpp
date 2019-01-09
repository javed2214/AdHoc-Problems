// Program to Find the Longest Common Prefix amongst an Array of Strings
// https://www.interviewbit.com/problems/longest-common-prefix/

#include<bits/stdc++.h>
using namespace std;

string getLongestPrefix(std::vector<string> &v){

	vector <int> s;
    if(v.size()==1) return v[0];
    for(auto it:v){
        s.push_back(it.length());
    }
    int x=*min_element(s.begin(),s.end());
    string st="";
    int count=0;
    for(int i=0;i<x;i++){
        count=0;
        for(int j=0;j<v.size()-1;j++){
            if(v[j][i]==v[j+1][i])
                count++;
        }
        if(count==v.size()-1)
            st+=v[0][i];
    }
    return st;
}

int main(){

	std::vector<string> v={"abcdef","abcdget","abcdweiiewhfe","abcdaaaa"};
	
	cout<<getLongestPrefix(v);

	return 0;
}
// OUTPUT => abcd