// https://www.codechef.com/problems/SISSUES

#include<bits/stdc++.h>
using namespace std;

int main(){

	int test;
	cin>>test;
	while(test--){
		int n,p=0,m=0;
		cin>>n;
		string str;
		cin>>str;
		int flag=0;
		stack <char> S;
		for(int i=0;i<str.length();i++){
			if(str[i]=='+') S.push('+');
			else{
				if(!S.empty())
					S.pop();
				else{
					flag=1;
					cout<<"FIND A NEW JOB\n";
					break;
				}
			}
		}
		if(flag!=1) cout<<"MAYBE YOU ARE SAFE\n";
	}
	return 0;
}