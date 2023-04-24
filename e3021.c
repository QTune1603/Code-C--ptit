#include<stdio.h> 
#include<math.h>

long long thoaDKPanlindromic(long long n){
	long long x=0;
	int p; 
	while(n>0){
		p=n%10;
		if(p==4) return 0; 
		x=x*10+p;
		n/=10;
	}
	return x;
}
int kiemTra(long long n){
	int flag=0;
	if(thoaDKPanlindromic(n)==n) flag=1;
	return flag;
}   
int kiemTraTongSo(long long n){
	int x=0;
	while(n>0){
		x+=n%10;
		n/=10;
	}
	if(x%10==0) return 1;
	return 0;
}
int main()
{
	int i,t,n;
	long long j;
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++) {
		scanf("%d",&n);
		int g=pow(10,n-1),k=pow(10,n);
		for( j = g ; j < k ; j++){
			if(kiemTra(j)==1){
				if(kiemTraTongSo(j)) printf("%d ",j);
			}
		}
		printf("\n");
	}
 } 
