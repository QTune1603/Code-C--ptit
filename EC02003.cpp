#include<stdio.h>
#include<math.h>
 
int main()
{
	int i,j,k,t;
	long long n; 
	scanf("%d",&t);
	int flag=0; 
	for(i=0;i<t;i++){
		scanf("%d",&n); 
		for(j=2;j<=sqrt(n);j++){
			if(n%j==0){
				flag=1;
				break; 
			} 
		} 
		if(flag==0&&n>=2){
			printf("YES"); 
		} 
		else {
			printf("NO"); 
		}  
	} 
 } 
