// https://www.codechef.com/PELT2019/problems/XORNEY/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000001

int getMod(string str, int m){
	ll sum=0;
	for(ll i=0;i<str.length();i++)
		sum=(sum*10+str[i]-'0')%4;

	return sum;
}	

ll f(ll a) {
    ll res[] = {a,1,a+1,0};
    ll x=getMod(to_string(a),4);
    return res[x];
}

int main(){

	// FASTREAD;
	ll test;

	cin>>test;
	while(test--){
		ll x,y;
		cin>>x>>y;
		ll s1=f(y);
		ll s2=f(x-1);
		ll s=s2^s1;
		if(s%2==0) cout<<"Even\n";
		else cout<<"Odd\n";
	}
	return 0;
}