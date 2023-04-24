#include <stdio.h>
int split(int n){
	int t;
	switch(n){
		case 0:
			t=0;
			break;
		case 1:
			t=1;
			break;
		case 8:
			t=0;
			break;
		case 9:
			t=0;
			break;
		default:
			t=2;
			break;		
	}
	return t;
} 
int main()
{
	int i,n;
	scanf("%d",&n);
	long long a[n];
	for ( i = 0 ; i < n ; i++){
		scanf("%lld",&a[i]);
	}
	for( i = 0 ; i < n ; i++){
		int z=-1;
		int b[20];
		long long sum=0;
		while(a[i]>0){
			z+=1;
			b[z]=a[i]%10;
			a[i]/=10;
		}
		int x,q,k=0;
		for(x=0;x<=z;x++){
			if(split(b[x])==2){
				k+=1;
				break;
			}
		}
		if(k==0){
			for (x=z;x>=0;x--){
				q=split(b[x]);
				sum=sum*10+q;
			}
			if(sum==0){
				printf("INVALID\n");
			}
			else {
				printf("%lld\n",sum);
			}
		}
		else {
			printf("INVALID\n");
		}
	}
	return 0;
}

