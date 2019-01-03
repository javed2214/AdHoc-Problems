// https://www.codechef.com/INTY2018/problems/INF1805

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	int test;
	cin>>test;
	while(test--){

		int n,q,a[100],k;
		cin>>n>>q;
		for(int i=0;i<n;i++)
			cin>>a[i];
		while(q--){
			cin>>k;
			ll sum=0;
			for(int i=0;i<n;i+=k+1)
				sum+=a[i];
			cout<<sum<<endl;
		}
	}
	return 0;
}