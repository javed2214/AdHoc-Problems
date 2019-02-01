// https://www.codechef.com/FEB19B/problems/CHEFING

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	int t;
	cin>>t;
	while(t--){

		string s;
		int n;
		cin>>n;
		unordered_map<char,int>Map;
		for(int i=0;i<n;i++){
			cin>>s;
			sort(s.begin(),s.end());
			for(int i=0;i<s.length()-1;i++){
				if(s[i]!=s[i+1])
					Map[s[i]]++;
			}
			Map[s[s.length()-1]]++;
		}
		int c=0;
		for(auto it:Map){
			if(it.second==n)
				c++;
		}
		
		cout<<c<<"\n";
	}

	return 0;
}