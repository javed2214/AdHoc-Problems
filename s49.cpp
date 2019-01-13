// https://www.codechef.com/LTC2017/problems/PARQUE

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	int t;
	cin>>t;
	while(t--){
		string str,s;
		cin>>str;
		int sum=0,mx=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
				sum++;
			}else{
				if(sum>mx) mx=sum;
				sum=0;
			}
		}
		cout<<max(sum,mx)<<"\n";
	}
	return 0;
}