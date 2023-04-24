#include<stdio.h>
#include<math.h>
 
int main() 
{
	long long m,n;
	scanf("%lld %lld",&m,&n);
	int i,count=0;
	for(i=m;i<=n;i++){
		int a=sqrt(i);
		if(a*a==i){
			count++;
		} 
	} 
	printf("%d\n",count); 
	for(i=m;i<=n;i++){
		int a=sqrt(i);
		if(a*a==i){
			printf("%d \n",i); 
		} 
	}
	 
 }
