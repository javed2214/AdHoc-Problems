// https://www.codechef.com/problems/JNTUV4

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000001

int main(){

	int t;

		int n,a[1001];
		std::map<int,bool> Map;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			Map[a[i]]=true;
		}
		int k,flag=0;
		cin>>k;
		for(int i=0;i<n;i++){
			if(Map[k-a[i]]==true){
				flag=1;
				break;
			}
		}
		if(flag==1) cout<<"YES\n";
		else cout<<"NO\n";
    
	return 0;
}