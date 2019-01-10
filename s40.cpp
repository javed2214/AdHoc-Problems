// Program to Find Strictly Smaller Number than the Given Number Such that all its Digits are Distinct
// 12321 => 12309

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define FASTREAD ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 10000001

int checkNo(int n){

	int hash[10];
	memset(hash,0,sizeof(hash));
	string str=to_string(n);
	for(int i=0;i<str.length();i++){
		hash[str[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(hash[i]>1) return 0;
	}
	return 1;
}
int main(){

	int n;
	cin>>n;
	int flag=0;
	while(n--){
		if(checkNo(n)){
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"Not Possible";
	else cout<<n;

	return 0;
}