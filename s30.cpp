// https://www.codechef.com/problems/TWTCLOSE

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int returnAns(bool *flag, int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(flag[i]) count++;
	}
	return count;
}

int main(){
	fastread;
	int n,k,p;
	cin>>n>>k;
	bool flag[n+1];
	memset(flag,false,sizeof(flag));
	string str;
	for(int i=0;i<k;i++){
		cin>>str;
		if(str!="CLOSEALL")
			cin>>p;
		if(str=="CLOSEALL"){
			memset(flag,false,sizeof(flag));
			cout<<returnAns(flag,n)<<"\n";
			continue;
		}
		flag[p]=!flag[p];
		cout<<returnAns(flag,n)<<"\n";
	}
	return 0;
}