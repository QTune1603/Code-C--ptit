#include<stdio.h>
#include<math.h> 

int main()
{
	long long x1,x2,y1,y2,r1,r2;
	scanf("%lld%lld",&x1,&y1);
	scanf("%lld%lld",&x2,&y2);
	scanf("%lld%lld",&r1,&r2);
	long long d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	
	if(d==0){
		if(r1==r2){
			printf("Cut"); 
		} 
		else{
			printf("Cut"); 
		} 
	} 
	else {
		if(d==(r1+r2)*(r1+r2)){
			printf("Touch"); 
		} 
		else {
			if(d>(r1+r2)*(r1+r2)) {
				printf("Don't Cut" ); 
			}
			else{
				if(d<(r1-r2)*(r1-r2)) {
					printf("Cut"); 
				}
				else {
					if(d==(r1-r2)*(r1-r2)){
						printf("Cut"); 
					}
					else {
						printf("Cut"); 
					} 
					 
				} 
			} 
		} 
		
	} 
	 
 }
