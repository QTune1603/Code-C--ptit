#include<stdio.h>
int panlindromic(int n){
	int i,t,sum=0;
	i=n;
	while( n > 0 ){
		t= n%10;
		sum=sum*10+t;
		n/=10;
	} 
	if(sum == i){
		return 1;
	}
	return 0;
} 
int main ()
{
	int i,a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for( i = a ; i <= b ;i++){
		int sum=0,z,k=0;
		int p=i;
		if(panlindromic(p)==1){
			while(p>0){
				z=p%10;
				if(z==6){
					k=1;
				}
				sum+=z;
				p/=10;
			}
			if( sum%10==8 && k==1){
				printf("%d ",i);
			}
		}
	}
}
