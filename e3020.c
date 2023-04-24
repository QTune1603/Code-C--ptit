#include<stdio.h>

long long kiemtra(long long n){
	int x;
	int count1=0,count2=0;
	while(n>0){
		x=n%10;
		if(x%2==0) {
			count1++;
		}
		else {
			count2++;
		} 
		n/=10;
	}
	if(count1>count2) return 1;
	return 0;
}
int main (){
	int i,t;
	long long n;
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++){
		scanf("%lld",&n);
		if(n%2==0){
			if(kiemtra(n)) printf("YES\n");
			else printf("NO\n");
		}
		else {
			printf("NO\n");
		}
	}
}
