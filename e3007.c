#include<stdio.h>
int kiemtra (int n) {
	int i,flag =0,sum=0; 
	for(i=1;i<n;i++){	
		if(n%i==0){
			sum+=i; 
			if(sum==n){
				flag=0; 
			} 
			else{
				flag=1; 
			} 
		} 
	} 
	if(flag==0){
		return 1; 
	} 
	else {
		return 0; 
	} 
} 
int main()
{
	int i,a,b;
	scanf("%d %d",&a,&b);
	if(a<b){
		for(i=a+1;i<=b;i++){
			if(kiemtra(i)) printf("%d ",i); 
		} 
	}
	else {
		for(i=b+1;i<=a;i++){
			if(kiemtra(i)) printf("%d ",i); 
		} 
	} 
 } 
