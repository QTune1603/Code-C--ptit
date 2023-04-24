#include<stdio.h>
#define ll long long
const int maxN=1e6;

int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[maxN+5]={},d[maxN+5]={};
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]>0)  d[a[i]]=i;
		}
		for(int i=1;i<=maxN+5;i++)
		{
			if(d[i]==0)
			{
				printf("%d\n",i);
				break;
			}
		}
	 } 
	 return 0;
 } 
