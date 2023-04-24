#include<stdio.h>

int main ()
{
	int i,q,n;
	scanf("%d",&n);
	long long a[n+1];
	int b[100];
	for(i=1;i<=n;i++){
		scanf("%lld\n",&a[i]); 
	} 
	for(i=1;i<=n;i++){
		int x=0,z=0;
		while(a[i]>0){
			z+=1;
			b[z]=a[i]%10;
			a[i]/=10; 
		} 
		for(q=1;q<z;q++){
			if(b[q]<b[q+1]){
				x+=1; 
			} 
		} 
		if(x==0){
			printf("YES\n"); 
		} 
		else {
			printf("NO\n"); 
		} 
	} 
	return 0; 
 } 
