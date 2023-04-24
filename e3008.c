#include <stdio.h>
int kiemtra(int n){
	int i, sum = 0, gt = 1, k, m;
	m = n;
	while (n != 0){
		k = n % 10;
		for (i = 1; i <= k; i++) gt *= i;
		sum += gt;
		gt = 1;
		n /= 10;
	}	
	if (sum == m) return 1; 
	else return 0; 
} 
int main()
{
	int a,b;
	scanf("%d %d",&a,&b); 
	if(a<b){
		int i; 
		for(i=a;i<=b;i++){
			if(kiemtra(i)){
				printf("%d ",i); 
			} 
		} 
	} 
	else{
		int j; 
		for(j=b;j<=a;j++){
			if(kiemtra(j)) printf("%d ",j); 
		} 
	} 
}
