// https://leetcode.com/problems/4sum/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

queue <int> q;

int getAns(std::vector<int> &v, int no, int target){

	int i=0,j=0,sum=0;
	static int count=0;
	int a[4];
	while(no){
		if(no&1){
			a[j]=v[i];
			j++;
		}
		i++;
		no>>=1;
	}
	for(int i=0;i<4;i++)
		sum+=a[i];
	if(sum==target){
		sort(a,a+4);
		count++;
		for(int i=0;i<4;i++)
			q.push(a[i]);
	}
	return count;
}

std::vector< vector<int> > fourSUm(std::vector<int> &v, int target){

	int s=v.size();
	int z;
	int range=(1<<s)-1;
	for(int i=1;i<=range;i++){
		if(__builtin_popcount(i)==4)
			z=getAns(v,i,target);
	}
	int m=4,i=0;
	int d=z;
	std::vector< vector<int> > X(z);
	while(d--){
		while(m--){
			X[i].push_back(q.front());
			q.pop();
		}
		i++;
		m=4;
	}
	return X;
}

int main(){

	std::vector<int> v={-4,-3,-2,-1,0,0,1,2,3,4};
	int target=0;
	
	std::vector< vector<int> > X;
	
	X=fourSUm(v,target);
	
	for(int i=0;i<X.size();i++){
		for(int j=0;j<X[i].size();j++)
			cout<<X[i][j]<<" ";
		cout<<"\n";
	}


	return 0;
}