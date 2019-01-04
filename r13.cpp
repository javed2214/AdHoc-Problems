// https://www.codechef.com/problems/LUCAS1/

#include<bits/stdc++.h>
#define SIZE 50
using namespace std;
typedef long long ll;
ll dp[SIZE];

void fib(){

	dp[0]=2;dp[1]=1;
	for(ll i=2;i<SIZE;i++){
		dp[i]=dp[i-1]+dp[i-2];
		//cout<<dp[i]<<" ";	
	}
}

int main(){
	
	ll test;
	cin>>test;
	fib();
	sort(dp, dp+SIZE);
	// for(int i=0;i<10;i++)
	//  	cout<<dp[i]<<" ";
	while(test--){
		
		string str;
		cin>>str;
		std::map<char,int> map;
		std::map<char,int> :: iterator ptr;
		for(int i=0;i<str.length();i++)
			map[str[i]]++;
		ptr=map.begin();
		int k=0,x=0,a[100001];
		while(ptr!=map.end()){
			a[k++]=ptr->second;
			++x;
			ptr++;
		}
		if(x==1 and a[0]==2){
			cout<<"FIT\n";
			continue;
		}
		else if(x==1 and a[0]!=2){
			cout<<"UNFIT\n";
			continue;
		}
		int count=0;
		sort(a,a+k);
		// for(int i=0;i<10;i++)
		//  	cout<<dp[i]<<" "<<a[i]<<" ";
		int flag=0,p;
		for(int i=0;i<k;i++){
			if(dp[i]!=a[i]){
				flag=1;
				break;
			}
		}
		if(flag==0) cout<<"FIT\n";
		else cout<<"UNFIT\n";
	}
	return 0;
}