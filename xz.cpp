
/*---------------------------
    Author : Javed Ansari
    Date   : 26 April 2019    
-----------------------------*/

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define DB(x) cout<<#x<<"="<<x<<"\n";
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end())
#define test(t) ll t; cin>>t; while(t--)
#define pi 2*acos(0.0)
#define endl cout<<"\n";
#define sss cout<<"*";
#define countt(str,ch) count(str.begin(),str.end(),ch)
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)
#define rev(v) reverse(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define ll long long int
#define ld long double
#define SIZE 100000001


void solveQues(){

	int n,m,a[1001],p;
	cin>>n>>m;
	memset(a,0,sizeof(a));

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		while(x--) cin>>p, a[p]++;
	}
	int c=0;
	for(int i=1;i<=m;i++){
		if(a[i]!=0) c++;
	}
	if(c==m) cout<<"YES\n";
	else cout<<"NO\n";

	return;
}


int main(){

	FASTREAD;
	solveQues();

	return 0;
}