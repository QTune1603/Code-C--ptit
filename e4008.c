#include<stdio.h>

void nhap(int *arr,int *n){
	*n=0;
	while(*n <= 0){
		scanf("%d",n);
	}
	int i;
	for(i = 0;i < *n;i++){
		scanf("%d",&arr[i]);
	}
} 
int chiSo(int *b, int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==x){
			return i;
		}
	}
	return -1;
}
void dem(int *arr, int n){
	int b[100];
	int dem[100];
	int i;
	int size=0;
	for(i=0;i<n;i++){
		dem[i]=0;
	}
	for(i=0;i<n;i++){
		int index=chiSo(b,size,arr[i]);
		if(index==-1){
			b[size]=arr[i];
			dem[size]=1;
			size++;
		}
		else {
			dem[index]++;
		}
	}
	hienThi(b,dem,size);
}
void hienThi(int *b,int *dem, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d %d\n",b[i],dem[i]);
	}
}
int main()
{
	int n;
	int arr[100];
	nhap(arr,&n);
	dem(arr,n);
	return 0;
}