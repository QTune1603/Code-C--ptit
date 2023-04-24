#include<stdio.h>

int main()
{
	int i,j,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for( i = 0 ; i < m ; i++){
		for( j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max = a[0][0];
	for( i = 0 ; i < m ; i++){
		for( j = 0 ; j < n ; j++){
			if(max < a[i][j]) max = a[i][j];
		}
	}
	printf("Phan tu max trong mang la : %d\n",max);
	int min = a[0][0];
	for( i = 0 ; i < m ; i++){
		for( j = 0 ; j < n ; j++){
			if(min > a[i][j]) min = a[i][j];
		}
	}
	printf("Phan tu min trong mang la : %d",min);
}
