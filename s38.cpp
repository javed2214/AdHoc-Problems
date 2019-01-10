// https://www.codechef.com/problems/PSG02

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 10000001

int main(){

	bool prime[SIZE];
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2;i*i<SIZE;i++){
		if(prime[i]){
			for(int j=2*i;j<SIZE;j+=i)
				prime[j]=false;
		}
	}

	ll t;
	cin>>t;
	while(t--){
		ll n,i;
		cin>>n;
		if(n%2==0){
			ll a,b,c,d;
			a=b=2;
			n-=4;
			for(ll i=2;i<=n;i++){
				if(prime[n-i] and prime[i]){
					c=min(n-i,i);d=max(n-i,i);
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"; break;
				}
			}
		}else{
			ll a,b,c,d;
			a=2;b=3;
			n-=5;
			for(ll i=2;i<=n;i++){
				if(prime[n] and prime[n-i]){
					c=min(n,n-i); d=max(n,n-i);
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"; break;
				}
			}
		}
	}
	return 0;
}