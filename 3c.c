#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j; 
	for (i = 1; i <= n; i++){
		for (j = 1; j < 2 * n; j++){
			if (i < n){
				if (abs(n - j) == (i - 1)){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	} 
 } 