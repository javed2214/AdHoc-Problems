																																																								/*
**************************
*  Author: Javed Ansari  *
**************************
							                        																																											*/
#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end())
#define test(t) ll t;cin>>t;while(t--)
#define rev(v) reverse(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0)
#define maxe(v) *max_element(v.begin(),v.end())
#define mine(v) *min_element(v.begin(),v.end())
#define ll long long int
#define ld long double
#define SIZE 100000001

bool prime[10000001];

void primeSeive(){

	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;

	for(int i=2;i*i<10000001;i++){
		if(prime[i]){
			for(int j=i*i;j<10000001;j+=i){
				prime[j]=false;
			}
		}
	}
}

int main(){

	FASTREAD;

	primeSeive();

	ll n,m;
	cin>>n>>m;

	ll sumRow=0,sumCol=0,mi=INT_MAX,x,j;
	ll a[n][m],count=0,b[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(prime[a[i][j]]) b[i][j]=0;
			else{
				x=a[i][j];
				count=0;
				while(!prime[x]){
					count++;
					++x;
				}
				b[i][j]=count;
			}
			// cout<<b[i][j]<<" ";
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sumRow+=b[i][j];
		}
		mi=min(mi,sumRow);
		sumRow=0;
	}

	ll c[m][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[j][i]=b[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sumCol+=c[i][j];
		}
		mi=min(mi,sumCol);
		sumCol=0;
	}

	cout<<mi<<"\n";

	return 0;
}
