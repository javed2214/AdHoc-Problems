// https://www.codechef.com/CODP2017/problems/CDP02/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int superSum(string s){
	if(s.length() == 1)
		return s[0] - '0';
	int sum=0;
	for(int i = 0; i<s.length(); i++){
		sum+=(s[i]-'0');
	}
	if(sum<10)
		return sum;
	else
		return superSum(to_string(sum));
}
int main(){
	string n;
	cin>>n;
	int k;
	cin>>k;
	ll sum = 0;
	for(int i=0;i<n.length();i++)
        sum+=n[i]-'0';	
	sum = sum*k;
	string s=to_string(sum);
	cout<<superSum(s)<<endl;
	return 0;
}