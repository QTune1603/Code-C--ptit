#include <stdio.h>

int ucln(int a, int b){
	while (a != b){
		if (a > b) a-=b;
		else b-=a;
	}
	return a;
}
int main()
{
	int c, d, i, j;
	scanf("%d%d",&c,&d);
	for (i = c ; i <= d-1; i++){
		for (j = i+1; j <= d; j++){
			if (ucln(i,j)==1){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
}
