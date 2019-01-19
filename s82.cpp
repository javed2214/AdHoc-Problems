// https://www.codechef.com/FEB15/problems/CHEFCH

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	int t;
	cin>>t;
	while(t--){
		
		string str,s1,s2;
		cin>>str;
		int s=str.length();
		for(int i=0;i<s;i++){
			if(i%2==0){
				s1+='+';
				s2+='-';
			}else{
				s1+='-';
				s2+='+';
			}
		}
		int c1=0,c2=0;
		for(int i=0;i<s;i++){
			if(str[i]!=s1[i]) c1++;
			if(str[i]!=s2[i]) c2++;
		}
		cout<<min(c1,c2)<<"\n";
	}
	return 0;
}