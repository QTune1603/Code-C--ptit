#include<stdio.h> 

long long thoaDKPanlindromic(long long n){
	long long x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
int kiemTra(long long n){
	int flag=0;
	if(thoaDKPanlindromic(n)==n) flag=1;
	return flag;
}   
int thoaDK(long long n){
	int x=0,p;
	while(n>0){
		p=n%10;
		if(p%2==0) return 0;
		x+=p;
		n/=10;
	}
	if (x%2==1) return 1;
	return 0;
}
int main ()
{
	int i,t;
	long long n;
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++){
		scanf("%lld",&n);
		if(kiemTra(n)==1){
			if(thoaDK(n)) {
				printf("YES\n");
			}
			else {
				printf ("NO\n"); 
			} 
		}
		else {
			printf("NO\n");
		}
	}	
}
	

