#include<stdio.h>

int main(){
	int n,i,tong=0,a[100];
	int count = 0;
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for( i = 0 ; i < n ; i++){
		if(a[i]%2!=0){
			tong+=a[i];
			count++;
		} 
	}
	printf("%.4f",(float)tong/count);
} 
