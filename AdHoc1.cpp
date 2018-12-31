// https://www.hackerrank.com/challenges/sherlock-and-array/problem

#include<bits/stdc++.h>
using namespace std;

int main(){

	int pre[100001];
	int n,x;
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		bool flag=false;

		for(int i=0;i<n;i++){
			cin>>x;
			if(i==0) pre[i]=x;
			else pre[i]=pre[i-1]+x;
		}
		
		for(int i=0;i<n-1;i++){
			if(pre[i]==pre[n-1]-pre[i+1]){
				flag=true;
				break;
			}
		}
		if(flag==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
