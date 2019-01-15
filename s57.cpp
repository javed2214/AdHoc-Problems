// https://leetcode.com/problems/longest-common-prefix/
// Program to Find Longest Common Prefix
// Ex:- Input=> Flower,Flow,Flight ==> Output=> Fl

#include<bits/stdc++.h>
using namespace std;

bool compare(pair <int,string>&p1, pair <int,string>&p2){
	return p1.first<p2.first;
}

string longestPrefix(std::vector<string> &vx){

	int flag=0;
	string str="";
	pair <int,string> p[vx.size()];
	for(int i=0;i<vx.size();i++)
		p[i]=make_pair(vx[i].length(),vx[i]);
	int size=vx.size();
	int i;
	sort(p,p+size,compare);
	int x=p[0].first;
	for(int j=0;j<x;j++){
		int c=0;
		for(int i=0;i<vx.size()-1;i++){
			if(vx[i][j]==vx[i+1][j])
				c++;
			else{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
		if(c==vx.size()-1)
			str+=vx[i][j];	
	}
	return str;
}


int main(){
	
	std::vector<string> v;
	int n;
	string str;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		v.push_back(str);
	}
	cout<<longestPrefix(v);

	return 0;
}