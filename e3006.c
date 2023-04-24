#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--){
		int a, b, j, range = 0, i, k, m = 0, dem = 0, rangeD =0, dem1 = 0;
		int c[10];
		int d[1000];
		scanf("%d%d",&a,&b);
		for (i = a; i <= b; i++){
			k = i;
			while (k != 0){
				range++;
				c[range] = k %10;
				k /= 10;
			}
			for (j = 1; j <= range; j++) m = m+pow(10,range-j) * c[j];
			if (m==i){
				rangeD++;
				d[rangeD] = i;
			}
			range = 0;
			m =0;
		}
		dem = 0;
		for (i = 1; i <= rangeD; i++){
			for (j = 2; j <= sqrt(d[i]); j++){
				if (d[i] % j ==0){
					dem++;
					break;
				}
			}
			if (dem == 0) {
			    if (dem1 == 10){
			        dem1 =1;
			        printf("\n");
			        printf("%d ",d[i]);
			    }
			    else{
			        dem1++;
			        printf("%d ",d[i]);
			    }
			}
			dem = 0;
		}
		printf("\n");
	}
}
