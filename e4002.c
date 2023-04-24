#include<stdio.h>
#include<stdbool.h>

void nhapMang(int *arr, int *n){
	*n = 0;
	while(*n <= 0){
		scanf("%d",n);
	}
	int i;
	for( i = 0 ; i < *n ; i++){
		scanf("%d",&arr[i]);
	}
}
bool ktra(int* arr, int n){
	int i;
	for( i = 0 ; i <= n/2 ; i++){
		if(arr[i] != arr[n-1-i]){
			return false;
		}
	}
	return true;
}
int main ()
{
	int i,t,n;
	int arr[100];
	scanf("%d",&t);
	for( i = 0 ; i<t ; i++){
		nhapMang(arr, &n);
		if(ktra(arr,n)){
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
