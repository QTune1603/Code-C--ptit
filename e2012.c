#include <stdio.h>
#include <math.h>
int main()
{
	long n, i, dem = 0, tg, m = 0;
	scanf("%li",&n);
	int a[15];
	for (i = 1; n != 0; i++){
		a[i] = n % 10;
		n /= 10;
		dem = i;	
	}
	tg = a[1];
	a[1] = a[dem];
	a[dem] = tg;
	for (i = dem; i >= 1; i--) m = m+ pow(10,i-1) * a[i];
	printf("%li",m);
}
