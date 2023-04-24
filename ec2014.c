#include <stdio.h>
int main()
{
	int n, i, sum = 0, gt = 1, k, m;
	scanf("%d",&n);
	m = n;
	while (n != 0){
		k = n % 10;
		for (i = 1; i <= k; i++) gt *= i;
		sum += gt;
		gt = 1;
		n /= 10;
	}	
	if (sum == m) printf("1");
	else printf("0");
}
