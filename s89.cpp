// https://www.codechef.com/TJCN2019/problems/TSECJC02

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000000

int main(){

	FASTREAD;
	std::vector<bool> prime(SIZE,true);
	prime[0]=false;
	prime[1]=false;
	for(ll i=2;i*i<SIZE;i++){
		if(prime[i]){
			for(ll j=i*2;j<SIZE;j+=i)
				prime[j]=false;
		}
	}
	ll t;
	cin>>t;
	while(t--){
		ll f1,f2;
		ll fib[100];
		cin>>f1>>f2;
		fib[0]=f1;fib[1]=f2;
		for(ll i=2;i<=19;i++){
			fib[i]=fib[i-1]+fib[i-2];
		}
		ll c=0;
		for(ll i=0;i<=20;i++){
			if(prime[fib[i]]){
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}