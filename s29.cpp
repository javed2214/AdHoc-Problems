// https://www.codechef.com/problems/CAMPON

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

ll takeMod(string str){
	ll sum=0;
	for(ll i=0;i<str.length();i++)
		sum=(sum*10+str[i]-'0')%MOD;
	return sum;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s1,s2,s3="";
		cin>>s1;
		ll l=s1.length();
		while(l--) s3+=" ";
		s2=s1;
		ll k=5,p=1;
		while(1){
			for(ll i=0;i<s1.length();i++){
				ll r=(i+s1.length()-p)%s1.length();
				s3[r]=s1[i];
			}if(s3!=s1)
				s2+=s3;
			else break;
			p+=1;
		}
		cout<<takeMod(s2);
		//cout<<s2;
	}
	return 0;
}