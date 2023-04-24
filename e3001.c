#include<stdio.h>
int kiemtra(int x,int k){
	int tong=0; 
	while(x>0){
		k=x%10;
		x/=10;
		tong+=k; 
	} 
	if(tong%10==0) return 1;
	return 0; 
} 
int main ()
{
	int i,t;
	scanf("%d",&t); 
	for(i=0;i<t;i++) {
		long long n;
		int k; 
		scanf("%lld",&n);
		if(kiemtra(n,k)){
			printf("YES\n"); 
		} 
		else{
			printf("NO\n"); 
		}  
	}
 } 
