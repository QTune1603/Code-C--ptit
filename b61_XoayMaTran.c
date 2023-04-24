#include<stdio.h>

/*
input 
  2 3 
  1 2 3
  4 5 6
  output :
   (90 nguoc)       
   3 6
   2 5
   1 4 
   (90 xuoi)
   4 1
   5 2
   6 3 
   (180 do)
   6 5 4
   3 2 1
   (chuyen vi)
   1 4 
   2 5 
   3 6 
*/ 
void xoay90nguoc(int m,int n,int a[100][100]){
	int i,j;
	for(i = 0 ; i < n ;i++){
		for(j = 0 ; j < m ;j++){
			printf("%d ",a[j][n-i-1]);
		}
		printf("\n");
	}
}
void xoay90xuoi(int m,int n,int a[100][100]){
	int i,j;
	for(i = 0 ; i < n ;i++){
		for(j = 0 ; j < m ;j++){
			printf("%d ",a[m-j-1][i]);
		}
		printf("\n");
	}
}
void xoay180(int m,int n,int a[100][100]){
	int i,j;
	for(i = 0 ; i < m ;i++){
		for(j = 0 ; j < n ;j++){
			printf("%d ",a[m-1-i][n-j-1]);
		}
		printf("\n");
	}
}
void chuyenvi(int m,int n,int a[100][100]){
	int i,j;
	for(i = 0 ; i < n ;i++){
		for(j = 0 ; j < m ;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
int main ()
{
	int i,j,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for(i = 0 ; i < m ; i++){
		for( j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]);
		}
	}
	//xoay90nguoc(m,n,a);
	//xoay90xuoi(m,n,a);
	//xoay180(m,n,a);
	chuyenvi(m,n,a);
 } 
