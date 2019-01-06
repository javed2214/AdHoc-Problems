// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/sniper-shooting/description/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]>0)
			a[i-1]=0;
		else{
			int j=i-1;
			while(j>=0){
				if(a[j]!=0 and a[i]-a[j]>0){
					a[j]=0;
				    break;
				}
				else j--;
			}
		}
	}
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i];
	cout<<s;

	return 0;
}