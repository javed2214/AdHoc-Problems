// https://leetcode.com/problems/search-insert-position/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int searchInsert(std::vector<int> &v, int target){

	std::map<int,int> Map;
	for(int i=0;i<v.size();i++)
		Map[v[i]]=i;
	int i,c=0;
	if(binary_search(v.begin(),v.end(),target))
		return Map[target];
	else{
		for(int i=0;i<v.size();i++){
			if(target>=v[i])
				c++;
		}
		return c;
	}
}

int main(){

	std::vector<int> v={1,2,3,5,6};
	int target=7;
	cout<<searchInsert(v,target);

	return 0;
}