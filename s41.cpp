// Program to Find whether it is Possible to Break the given Number into Sum of Two Distinct Prime Numbers or Not
// If it is Possible Print those Pair of Numbers Numbers
// If Not Possible Print "Not Possible"

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 10001
bool prime[SIZE];

void primeSeive(){
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2;i*i<SIZE;i++){
		if(prime[i]){
			for(int j=i*2;j<SIZE;j+=i)
				prime[j]=false;
		}
	}
}

int main(){

	int n;
	cin>>n;
	primeSeive();
	int flag=0;
	for(int i=2;i<n/2;i++){
		if(prime[i] and prime[n-i]){
			flag=1;
			cout<<i<<" "<<n-i<<"\n";
		}
	}
	if(flag==0) cout<<"Not Possible";

	return 0;
}