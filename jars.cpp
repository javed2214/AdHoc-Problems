// https://www.codechef.com/problems/TYPING

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 100000000

int main(){

	FASTREAD;
	ll test;
	cin>>test;
	while(test--){
		ll n;
		cin>>n;
		string str;	
		map<string,bool>Map;
		std::vector<string> v;
		for(int i=0;i<n;i++){
			cin>>str;
			v.push_back(str);
		}
		int tot=0,sum=0;
		std::map<char,char>M;
		M['d']='l';M['f']='l';M['j']='r';M['k']='r';
		std::map<string,int> M2;
		std::vector<int> c;
		int flag=0;
		for(int i=0;i<v.size();i++){
			flag=0;
			if(Map.find(v[i])!=Map.end()){
				sum+=M2[v[i]]/2;
				flag=1;
			}
			else{
				for(int j=0;j<v[i].length();j++){
					if(j==0) sum+=2;
					else{
						if(M[v[i][j-1]]=='l' and M[v[i][j]]=='r')
							sum+=2;
						else if(M[v[i][j-1]]=='r' and M[v[i][j]]=='l')
							sum+=2;
						else
							sum+=4;
					}
				}
			}
			Map[v[i]]=true;
			if(flag==0)
				M2[v[i]]=sum;
			tot+=sum;
			sum=0;
		}
		cout<<tot<<"\n";
	}
	return 0;
}