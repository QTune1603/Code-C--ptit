#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int flag =0; 
	int sum=0; 
	for(i=1;i<n;i++){
		//Duyet i tu 1 den n-1
		//kiem tra xem i co phai uoc cua n khong 	
		if(n%i==0){
			sum+=i; 
			if(sum==n){
				flag=0; 
			} 
			else{
				flag=1; 
			} 
		} 
		//kiem tra xem tong cac so i tim dc co bang n hay khong  
	} 
	if(flag==0){
		printf("1"); 
	} 
	else {
		printf("0"); 
	} 
 } 
