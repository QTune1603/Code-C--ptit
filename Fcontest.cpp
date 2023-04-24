#include <stdio.h>
#include <math.h>
int main () {
	int ketqua = 1, n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++)
	{
		ketqua *= 2;
		ketqua %= 1000000007;
	}
	printf("%d", ketqua);
    return 0;
}
