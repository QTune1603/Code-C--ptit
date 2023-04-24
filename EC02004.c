#include<stdio.h>

int main() {
	int a,b,t,i,T;
	scanf("%d",&T);
	for(t=0;t<T;t++){
		scanf("%d %d",&a,&b);
		for(i=a;i>0;i--) {
		    if(a%i==0 && b%i==0) {
			printf("%d",i);
			break; 
		    } 
	    } 
	     
	} 
	
	
}
