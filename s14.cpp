// https://www.codechef.com/problems/GNM

#include<bits/stdc++.h>
using namespace std;

int main(){

	int test;
	cin>>test;
	while(test--){
		int n,a[101];
		std::vector<int> v1,v2;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++){
			int x=a[i];
			int l,r;
			l=x/(pow(10,floor(log10(x))));
			r=x%10;
			v1.push_back(l);
			v2.push_back(r);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int count=0;
		for(int i=0;i<v1.size();i++){
			for(int j=0;j<v2.size();j++){
				if(v1[i]==v2[j]) count++;
			}
		}
		if(count>=(n-1)) cout<<"The door will be opened\n";
		else cout<<"The door cannot be opened\n";
	}
	return 0;
}
