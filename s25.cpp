// https://www.interviewbit.com/problems/amazing-subarrays/ 
// You are given a string S, and you have to find all the amazing substrings of S.
// Amazing Substring is one that starts with a vowel (a, e, i, o, u, A, E, I, O, U).

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="pGpEusuCSWEaPOJmamlFAnIBgAJGtcJaMPFTLfUfkQKXeymydQsdWCTyEFjFgbSmknAmKYFHopWceEyCSumTyAFwhrLqQXbWnXSn";
	int n=str.length();
	char ch[]={'a','e','i','o','u','A','E','I','O','U'};
	int p=sizeof(ch)/sizeof(char);
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			if(str[i]==ch[j]){
				sum+=(str.length()-i);
			}
		}
	}
	cout<<sum;

	return 0;
}
