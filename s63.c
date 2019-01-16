// https://www.codechef.com/problems/SWAPS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MOD 1000000007
#define ll long long int
#define SIZE 1000000

int minn(int x, int y){
	if(x>y) return y;
	else return x;
}

int main(){

	int t;
	scanf("%d",&t);
	while(t--){

		char str[100001];
		scanf("%s",str);
		int n=strlen(str);
		int a[1000001],count=0;
		for(int i=0;i<n;i++){
			if(str[i]=='1'){
				count++;
				a[i]=1;
			}
			else a[i]=-1;
		}
		if(count==n){
			printf("%d\n",count-1);
			continue;
		}
		int maxx=23643746;
		int sum=0;
		for(int i=0;i<n;i++){
			if(sum<maxx) maxx=sum;
			if(sum>0) sum=0;
			sum+=a[i];
		}
		maxx=minn(maxx,sum);
		// DB(maxx);
		int z=abs(maxx)+count;
		printf("%d\n",z);
	}

	return 0;
}