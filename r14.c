// https://www.codechef.com/ISCC2018/problems/T22/

#include<stdio.h>
#define swap(a,b) a^=b^=a^=b
int smallestPrime(int [], int);
int prime(int);

int main()
{
	int test,n,i,j,p=0,x,a[10001],b[10001];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&n);
		p=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				b[p]=a[i]*a[j];
				p++;
			}
		}
		int x=smallestPrime(b,p);
		printf("%d\n",x);
	}
	return 0;
}
int smallestPrime(int b[], int p)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		if(b[i]==0)
		{
			b[i]=b[i+1];
			p--;
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=i+1;j<p;j++)
		{
			if(b[i]>b[j])
				swap(b[i],b[j]);
		}
	}
	for(i=0;i<p;i++)
	{
		if(prime(b[i]))
			return b[i];
	}
	return -1;
}
int prime(int x)
{
	int i;
	if(x==2)
		return 1;
	if(x==0)
		return 0;
	if(x==1)
		return 0;
	for(i=2;i<x;i++)
		if(x%i==0)
			return 0;
	return 1;
}