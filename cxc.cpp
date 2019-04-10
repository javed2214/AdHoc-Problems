// ------- Author: Javed Ansari -------
// Playing With Paper: Codeforces

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end());
#define ll long long int
#define SIZE 100000001


int main(){

	FASTREAD;
	
	ll a,b;
	cin>>a>>b;

	ll c=0;

	while(a>0 and b>0){

		if(a>=b){
			c+=a/b;
			a=a%b;
		}
		else{
			c+=b/a;
			b=b%a;
		}
	}

	cout<<c<<"\n";
	
	return 0;
}