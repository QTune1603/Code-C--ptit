#include<stdio.h>
#include<math.h> 

int main()
{
	long long a,b,c;
	double nghiem; 
	scanf("%lld %lld %lld",&a,&b,&c); 
	if(a==0){
		if(b==0){
			if(c==0){
				printf("VO SO NGHIEM") ;
			} 
			else {
				printf("VO NGHIEM"); 
			} 
		} 
		else {
			nghiem= (double)-c/b;
			nghiem=roundf(nghiem*100)/100; 
			printf("%.2f",nghiem); 
		} 
	} 
	else {
	    double delta=(double)b*b-4*a*c;
		double x1,x2;
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a); 
		x1=roundf(x1*100)/100;
		x2=roundf(x2*100)/100; 
		 
		if(delta>0){
			if(x1>x2) {
				printf("%.2f %.2f",x1,x2) ;
			}
			else{
				printf("%.2f %.2f",x2,x1) ;
			} 
		} 
		else if(delta==0){
			printf("%.2f",x1); 
		} 
		else{
			printf("VO NGHIEM"); 
			
			
		} 
	} 
 } 
