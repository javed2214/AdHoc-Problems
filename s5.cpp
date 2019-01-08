// Given an array of distinct integers, Find All Possible Two pairs (a,b) and (c,d) such that a+b=c+d and a,b,c and d are Distinct Elements.
// Ex : 3,4,7,1,2,9,8
/*
OUTPUT ====>>>
(2 3) , (1 4) =>5
(9 1) , (7 3) =>10
(9 2) , (7 4) =>11
(8 3) , (7 4) =>11
(8 3) , (9 2) =>11
(8 4) , (9 3) =>12
(8 1) , (2 7) =>9
(8 2) , (7 3) =>10
(8 2) , (9 1) =>10
*/

#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int d1,d2;
}Node;

Node node[100];
static int k=0;

void getAns(int *a, int n){

	int i=0,sum=0,x;
	while(n){
		if(n&1){
			x=a[i];
			sum+=a[i];
		}
		i++;
		n=n>>1;
	}
	node[k].d1=x;
	node[k].d2=sum-x;
	k++;
	if(k!=0){
		for(int i=0;i<k;i++){
			if(sum==node[i].d1+node[i].d2 and node[i].d1!=node[k-1].d1 and node[i].d2!=node[k-1].d2){
				cout<<"("<<node[k-1].d1<<" "<<node[k-1].d2<<")"<<" , ("<<node[i].d1<<" "<<node[i].d2<<") =>"<<sum<<"\n";
			}
		}
	}
}
void getMask(int *a, int n){

	int range=(1<<n)-1;
	for(int i=1;i<=range;i++){
		if(__builtin_popcount(i)==2)
			getAns(a,i);
	}
}
int main(){

	int a[]={3,4,7,1,2,9,8};
	int n=sizeof(a)/sizeof(int);

	getMask(a,n);

	return 0;
}