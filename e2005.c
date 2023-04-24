#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--){
		long n, dem = 2, i, range = 1, k;
		int a[100];
		scanf("%li",&n);
		for (i = 2; i <= n/2; i++){
			if (n % i ==0) {
				dem++;
				break;
			}
		}
		if (dem > 2){
			k = dem;
			dem = 2;
			range++;
			a[range - 1] = i;
			a[range] = n/i;
			while (k > 2){
				n = n /i;
				for (i = 2; i <= n/2; i++){
					if (n % i ==0) {
						dem++;
						break;	
					}
 				}
 				if (dem > 2){
 					k = dem;
 					dem = 2;
 					range++;
 					a[range - 1] = i;
					a[range] = n/i; 
				 }
				 else k = 2;
			}
		}
		else {
			range++;
			a[range - 1] = 1;
			a[range] = n;
		}
		for (i = 1; i <= range; i++) printf("%d ",a[i]);
		printf("\n");
	}	
}
