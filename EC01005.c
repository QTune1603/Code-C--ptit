#include<stdio.h>

int main() {
	int n,t;
	scanf("%d",&t);
	int i;
	for( i=0;i<t;i++){
		scanf("%d",&n);
		double m = (double)1/n;
//		m = floor(1e15*m)/1e15;
		printf("%.15f\n",m); 
	}
}

