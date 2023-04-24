#include<stdio.h>
#include<math.h> 

int main() 
{
	
	float a,b,c,delta,x1,x2; 
	scanf("%f %f %f",&a,&b,&c);
	delta = b*b-4*a*c;  
	x1=(-b+sqrt(delta))/(2*a);
	x2= (-b-sqrt(delta))/(2*a);
	 
	if(a==0){
		if(b==0){
			if(c==0){
				return 0; 
			} 
			else {
				printf("NO"); 
			}  
		} 
		else {
			printf("%.2f",-c/b); 
		} 
	} 
	else {
		if(delta>0){
			printf("%.2f  %.2f",x1,x2); 
		}
		else if(delta==0){
			printf("%.2f",-b/(2*a)); 
		} 
		else {
			printf("NO"); 
		} 
		 
	} 
	return 0; 
	
 }
