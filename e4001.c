#include<stdio.h>
#include<math.h>

int kiemTraSNT(int n){
	int i;
	if(n==0||n==1) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0; 
	} 
	return 1;
} 
int main ()
{ 
	int t,n,i,j,k,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(k=0;k<n;k++){
			scanf("%d",&a[k]); 
		} 
		for(j=0;j<n;j++){
			if(kiemTraSNT(a[j])) printf("%d ",a[j]);  
		} 
		printf("\n"); 
	}
	
 } 
