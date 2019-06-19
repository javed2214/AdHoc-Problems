// Help Sherlock Holmes (CodeChef)

#include<bits/stdc++.h>
using namespace std;
#define MX 101

int main(){

	string str,s;
	getline(cin,str);

	for(int i=0;i<str.length();i++){
		if(str[i]!=' ')
			s+=str[i];
	}
	int len=s.length();
	int row,col;

	row=floor(sqrt(len));
	col=ceil(sqrt(len));

	int count=0;
	char mat[MX][MX];

	for(int i=0;i<MX;i++)
		for(int j=0;j<MX;j++)
			mat[i][j]='@';

	int flag=0;

	for(int i=1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(count<len)
				mat[i][j]=s[count++];
			else{
				flag=1;
				break;
			}
		}
		if(flag) break;
	}

	s.clear();
	string c;

	for(int i=1;i<=col;i++){
		for(int j=1;j<=row;j++){
			if(mat[j][i]!='@' and mat[j][i]!=' ')
				c+=mat[j][i];
		}
		s+=c;
		s+=" ";
		c.clear();
	}
	cout<<s.substr(0,s.length());

	return 0;
}
