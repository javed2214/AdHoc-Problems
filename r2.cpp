// https://www.codechef.com/problems/SUPPRM

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define SIZE 1000000
typedef long long ll; 

int main(){

	bool prime[SIZE+1];
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;

	for(int p=2;p*p<=SIZE;p++){
		if(prime[p]){
			for(int i=p*2;i<=SIZE;i+=p)
				prime[i]=false;
		}
	}
	std::vector<int> V;
	for(int i=2;i<=SIZE;i++){
		if(prime[i]){
			V.push_back(i);
		}
	}
	std::vector<int> X;
	for(int i=0;i<V.size();i++){
		if(prime[i+1]){
			X.push_back(V[i]);
		}
	}
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;

		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+X[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
