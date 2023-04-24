#include<stdio.h>
#include<math.h>
 
int main() 
{
	long long m,n;
	long long arr[1000];
	scanf("%lld %lld",&m,&n);
	long long i,count=0;
	for(i=m;i<=n;i++){
		int a=sqrt(i);
		if(a*a==i){
			count++;
			arr[count] = i;  
		} 
	} 
	printf("%lld\n",count);
	for (i = 1; i <= count; i++) printf("%lld \n",arr[i]);
 }
