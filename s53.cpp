// https://www.codechef.com/JAN19B/problems/DPAIRS/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){
	FASTREAD;
	ll n,m;
	cin>>n>>m;
	ll A[n],B[m];
	int in1,in2;
	int maxx=INT_MIN;
	int minn=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(A[i]>maxx){
			maxx=A[i];
			in1=i;
		}
	}
	for(int i=0;i<m;i++){
		cin>>B[i];
		if(B[i]<minn){
			minn=B[i];
			in2=i;
		}
	}
	for(int i=0;i<n;i++)
		cout<<i<<" "<<in2<<"\n";
	for(int i=0;i<m;i++){
		if(i!=in2)
			cout<<in1<<" "<<i<<"\n";
	}
	return 0;
}