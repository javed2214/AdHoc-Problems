
/*---------------------------
    Author : Javed Ansari
    Date   : 23 April 2019    
-----------------------------*/

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define DB(x) cout<<#x<<"="<<x<<"\n";
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end())
#define test(t) ll t; cin>>t; while(t--)
#define pi 2*acos(0.0)
#define endl cout<<"\n";
#define ss cout<<"*";
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)
#define rev(v) reverse(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define ll long long int
#define ld long double
#define SIZE 100000001


void solveQues(){

	string str1,str2,str3;
	cin>>str1>>str2;

	for(int i=0;i<str1.length();i++){
		if(str1[i]!=str2[i]) str3+="1";
		else str3+="0";
	}
	cout<<str3;
	endl;

	return;
}


int main(){

	FASTREAD;
	solveQues();

	return 0;
}