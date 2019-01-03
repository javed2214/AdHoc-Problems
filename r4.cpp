//https://www.codechef.com/INTY2018/problems/INF1804/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	ll test;
	cin>>test;
	while(test--){

		ll n,sum=0;
		cin>>n;
		for(ll i=1;i<=n*n;i++)
			sum+=i;
		cout<<(sum/n)<<endl;
	}
	return 0;
}