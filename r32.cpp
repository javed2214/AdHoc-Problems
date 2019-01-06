// https://www.codechef.com/problems/GIT01

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ff first
#define ss second
#define inf INT_MAX
#define minf INT_MIN
#define pb push_back
#define mp make_pair
typedef vector<int> Vi;
typedef vector<string> Vs;
typedef pair<int,int> Pii;
typedef pair<char,int> Pci;
typedef pair<string,int> Psi;
typedef map<int,int> Mii;
typedef map<char,int> Mci;
typedef map<string,int> Msi;
typedef unordered_map<string,int> Umsi;
typedef unordered_map<char,int> Umci;
typedef set<int> Si;
typedef unordered_set<int> Usi;
typedef stack<int> Sti;
typedef stack<char> Stc;


int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char a[n][m],b[n][m],c[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if((i+j)%2==0){
					b[i][j]='R';
					c[i][j]='G';
				}
				else{
					b[i][j]='G';
					c[i][j]='R';
				}
			}
		}
		int cost1=0,cost2=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='R' and b[i][j]=='G')
					cost1+=5;
				if(a[i][j]=='G' and b[i][j]=='R')
					cost1+=3;
				if(a[i][j]=='R' and c[i][j]=='G')
					cost2+=5;
				if(a[i][j]=='G' and c[i][j]=='R')
					cost2+=3;
			}
		}
		cout<<cost1<cost2?cost1:cost2;
		cout<<ans<<"\n";
	}

	return 0;
}