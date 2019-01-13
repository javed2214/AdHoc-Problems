// https://www.codechef.com/LTC2017/problems/MFQUE

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	FASTREAD;
		int n,a[1001],b[1001];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++){
			int l,r;
			ll sum=0;
			cin>>l>>r;
			int j=0;
			for(int i=l-1;i<=r-1;i++)
				b[j++]=a[i];
			sort(b,b+r-l+1);
			for(int i=1;i<r-l+1;i++){
				sum+=pow(b[i]-b[i-1],2);
			}
			cout<<sum<<"\n";
		}
	return 0;
}