// https://www.hackerrank.com/challenges/maximum-element/problem

#include<bits/stdc++.h>
using namespace std;

int main(){

	stack <int> S;
	stack <int> trackStack;
	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x;
		if(x==1){
			cin>>y;
			S.push(y);
			if(trackStack.empty())
				trackStack.push(y);
			else{
				if(y > trackStack.top())
					trackStack.push(y);
				else
					trackStack.push(trackStack.top());
			}
		}
		if(x==2){
			S.pop();
			trackStack.pop();
		}
		if(x==3)
			cout<<trackStack.top()<<"\n";
	}
	return 0;
}