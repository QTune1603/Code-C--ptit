#include<stdio.h>
#include<math.h>

int main() {
	double n;
	scanf("%lf",&n);
	printf("%.121f", (double)n/(2*(n-1))); 
} 
