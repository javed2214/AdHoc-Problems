// https://leetcode.com/problems/generate-parentheses/
// Program to Generate Valid Combination of Parentheses

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int getAns(char ch1, char ch2){

	if(ch1=='(' and ch2==')') return 1;
	return 0;
}

int checkP(char ch){
	
	if(ch=='(') return 1;
	return 0;
}

int checkParentheses(string str){

	stack <char> S;
	int c=0,o=0;
	char temp,ch;
	for(int i=0;i<str.length();i++){
		ch=str[i];
		if(checkP(ch)){
			S.push(ch);
			o++;
		}
		else{
			if(!S.empty()){
				temp=S.top();
				S.pop();
				c++;
			}
			if(!getAns(temp,ch))
				return 0;
		}
	}
	if(c==o) return 1;
	return 0;
}

int main(){

	int n;
	string str;
	cin>>n;
	for(int i=0;i<n;i++)
		str+='(';
	for(int i=0;i<n;i++)
		str+=')';
	std::vector<string> v;
	do{
		v.push_back(str);
	}while(next_permutation(str.begin(),str.end()));

	for(auto it:v){
		if(checkParentheses(it))
			cout<<it<<"\n";
	}

	return 0;
}