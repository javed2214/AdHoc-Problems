// https://leetcode.com/problems/container-with-most-water/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int maxArea(std::vector<int> &v){

	int l=0,r=v.size()-1;
	int maxArea=INT_MIN;
	while(l<r){
		maxArea=max(maxArea,min(v[l],v[r])*(r-l));
		if(v[l]<v[r]) l++;
		else r--;
	}
	return maxArea;
}

int main(){

	std::vector<int> v={1,8,6,2,5,4,8,3,7};
	cout<<maxArea(v);

	return 0;
}