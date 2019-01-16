// https://www.codechef.com/COWO1601/problems/SQUE1

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	FASTREAD;
	int t;
	cin>>t;
	while(t--){
		string str,s;
		char ch;
		int n,q;
		cin>>n>>q;
		cin>>str;
		std::map<char,int> Map;
		for(int i=0;i<str.length();i++)
			Map[str[i]]++;
		for(int i=0;i<q;i++){
			cin>>ch>>s;
			if(s=="odd" and Map[ch]%2!=0)
				cout<<"yes\n";
			else if(s=="odd" and Map[ch]%2==0)
				cout<<"no\n";
			else if(s=="even" and Map[ch]%2!=0)
				cout<<"no\n";
			else
				cout<<"yes\n";
		}
	}
	return 0;
}