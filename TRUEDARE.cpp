// 	https://www.codechef.com/problems/TRUEDARE

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000000

int main(){

	FASTREAD;
	ll test,x;
	cin>>test;
	while(test--){
		std::map<int,bool> Map1,Map2;
		int flag=0;
		int tr,dr,ts,ds;
		cin>>tr;
		for(int i=0;i<tr;i++){
			cin>>x;
			Map1[x]=true;
		}
		cin>>dr;
		for(int i=0;i<dr;i++){
			cin>>x;
			Map2[x]=true;
		}
		cin>>ts;
		for(int i=0;i<ts;i++){
			cin>>x;
			if(Map1.find(x)==Map1.end())
				flag=1;
		}
		cin>>ds;
		for(int i=0;i<ds;i++){
			cin>>x;
			if(Map2.find(x)==Map2.end())
				flag=1;
		}
		if(flag) cout<<"no\n";
		else cout<<"yes\n";
	}
	return 0;
}