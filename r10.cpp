// https://www.codechef.com/LTIME67B/problems/PPATTERN

#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int p=1,k,m,i,j;
		int a[101][101];
		for(int k=0;k<=n-1;k++){
			i=0;
			j=k;
			while(j>=0){
				a[i][j]=p;
				++i;
				--j;
				++p;
			}
		}
		for(int k=1;k<=n-1;k++){
			i=k;
			j=n-1;
			while(i<=n-1){
				a[i][j]=p;
				++i;
				--j;
				p++;
			}
		}
		for(int i=0;i<n;i++){
	 		for(int j=0;j<n;j++)
	 			cout<<a[i][j]<<" ";
	 		cout<<"\n";
		}
	}
	return 0;
}