// https://www.codechef.com/problems/PSG03
// Efficient Algorithm
// If you use any Other Algorithm than this, you'll surely get TLE

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100001

int main(){

	FASTREAD;
	ll n;
	cin>>n;
	ll i=0,a[n+2];
	ll x,y;
	for(ll i=1;i<=n;i++){
		cin>>x;
		if(i==1) a[i]=x;
		else a[i]=a[i-1]+x;
	}
	ll q;
	cin>>q;
	while(q--){
		cin>>x>>y;
		if(x==1) cout<<a[y]<<"\n";
		else cout<<a[y]-a[x-1]<<"\n";
	}

	return 0;
}