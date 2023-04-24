#include <stdio.h>
#include <math.h>
int Prime(long n){
	int test = 0;
	if (n < 2) return 0;
	else{
		for (int i = 2; i <= sqrt(n); i++){
			if (n % i ==0){
				test++;
				return 0;
				break;
			}
		}
		if (test == 0) return 1;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--){
		long n, max = 0;
		scanf("%li",&n);
		if (Prime(n) == 1 || n == 1) printf("%li",n);
		else{
			for (int i = 2; i <= sqrt(n); i++){
				if (n % i ==0){
					if (Prime(i) == 1 && i > max) max = i;
					if (Prime(n/i) == 1 && n/i > max) max = n/i;
				}
			}
			printf("%li",max);
		}
		printf("\n");
	}
}
 
