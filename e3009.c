#include <stdio.h>
#include <math.h>
int fib(long n){
	long sum1 = 1,sum2 = 0, tg1;
	if (n==0 || n==1) return 1;
	while (sum1 < n){
		tg1 = sum1;
		sum1 +=sum2;
		sum2 = tg1;
	}
	if (sum1 > n) return 0;
	else return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--){
		long long m;
		scanf("%lli",&m);
		if (fib(m)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
