#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++){
		for( j = 0 ; j <= i ;j++){
			int k,iGT=1;
			for(k = 1 ; k <= i ; k++){
				iGT = iGT*k;
			}
			int jGT = 1;
			for(k = 1 ; k <= j ; k++){
				jGT = jGT*k;
			}
			int ijGT = 1;
			for(k = 1 ; k <= i-j ; k++){
				ijGT = ijGT*k;
			}
			int toHop = iGT/(ijGT*jGT);
			printf("%4d", toHop);
		}
		printf("\n");
	}
}
