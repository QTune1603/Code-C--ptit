#include<stdio.h>
#include<math.h>
 
int main()
{
	int i,j,t;
	long long n; 
	scanf("%d",&t);
	int flag=0; 
	for(i=0;i<t;i++){
		scanf("%lld",&n); 
		for(j=2;j<=sqrt(n);j++){
			if(n%j==0){
				flag=1; 
				break; 
			} 
			flag=0; 
		} 
		if(flag==0&&n>=2){
			printf("YES\n"); 
		} 
		else {
			printf("NO\n"); 
		}  
	} 
 } 
