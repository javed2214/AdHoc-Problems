// https://codeforces.com/problemset/problem/746/B

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	string str;
	cin>>str;
	if(str.length()==1){
		cout<<str;
		return 0;
	}
	deque <char> D;
	int i=0;
	if(str.length()&1){
		while(i<str.length()){
			if(i==0) D.push_front(str[i++]);
			if(i==str.length()-1) D.push_back(str[i++]);
			else D.push_front(str[i++]);
			D.push_back(str[i++]);
		}
	}
	else{
		while(i<str.length()){
			if(i==0) D.push_front(str[i++]);
			D.push_back(str[i++]);
			D.push_front(str[i++]);
		}
	}
	while(!D.empty()){
		char ch=D.front();
		if(isalpha(ch)) cout<<ch;
		D.pop_front();
	}

	return 0; 
}
