// Program to Find Lonngest SubString without Repeating Characters
// Ex:- abcabcbb ==>> abc (Length: 3)

#include<bits/stdc++.h>
using namespace std;

int getAns(string s, int n){

	std::map<char,int> Map;
	int count=0,i=0;
	for(i;i<s.length();i++){
		if(Map.find(s[i])==Map.end()){
			Map[s[i]]=i;
		}else{
			i=Map[s[i]];
			if(Map.size()>count)
				count=Map.size();
			Map.clear();
		}
	}
	int size=Map.size();
	return max(size,count);
}

int main(){

	string str="abcabcbb";
	int n=str.length();

	cout<<getAns(str,n);

	return 0;
}