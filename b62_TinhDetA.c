#include<stdio.h>
#define max 100 
/*
	Cap 2:
    A =  [a  b]
         [c  d] 
	det(A) = a.d - b.c
	
	Cap 3:
	1 2 3
	4 5 6
	7 8 9
	
	det = 1*5*9 + 2*6*7 + 3*4*8 - 3*5*7 - 2*4*9 - 1*6*8
	
	t1 = 1*5*9 + 2*6*7 + 3*4*8
	=> a[k][l]*a[k+1][l-1] ? vuot qua mang
	t2 = 3*5*7 + 2*4*9 + 1*6*8
	=> a[k][l]*a[k+1][l-1} vuot qua mang
	det = t1 - t2
*/

int tinh_mod(int x, int y){
	int r = x%y;
	return r<0? r+y : r;
}
int tinhDet(int x[100][100], int n){
	int tong_1 = 0;
	int tong_2 = 0;
	
	int k=0;
	for(int l=0; l<n; l++){
		int temp =1;
		for(int t=0; t<n; t++){
			temp = temp*x[tinh_mod((k+t),n)][tinh_mod((l+t), n)];
		}
		tong_1 = tong_1+temp;
	}
	
	k=0;
	for(int l=0; l<n; l++){
		int temp =1;
		for(int t=0; t<n; t++){
			temp = temp*x[tinh_mod((k+t), n)][tinh_mod((l-t), n)];
		}
		tong_2 = tong_2+temp;
	}
	return tong_1-tong_2; 
}
int main ()
{
	int a[max][max],m,n;
	scanf("%d",&m,&n); 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]); 
		} 
	}
	printf("det(x) = %d", tinhDet(a, n));	
}
