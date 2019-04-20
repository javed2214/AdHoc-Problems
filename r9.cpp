// https://www.codechef.com/UCS2018/problems/UCS01

#include<bits/stdc++.h>
using namespace std;
#define SIZE 10000 

void findAns(std::vector<int> &V){

	for(int i=0;i<V.size()-1;i++){
		if(abs(V[i]-V[i+1])>1){
			swap(V[i],V[i+1]);
			for(int j=i;j>0;j--){
				if(abs(V[j]-V[j-1])>1)
					swap(V[j],V[j-1]);
			}
		}
	}
}
int main(){

	int test;
	cin>>test;
	while(test--){
		int n,x;
		cin>>n;
		std::vector<int> V;
		for(int i=0;i<n;i++){
			cin>>x;
			V.push_back(x);
		}
		findAns(V);

		for(int i=0;i<V.size();i++)
			cout<<V[i]<<" ";
		cout<<endl;
	}

	return 0;
}
