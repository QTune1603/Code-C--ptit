#include<stdio.h>
int n,a[100];
void nhapMang(){
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
} 
void xuatMang(){
	int i;
	for( i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void daoNguocMang(){
	int i;
	for(i=0;i<n/2;i++){
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}
int main ()
{
	nhapMang(a,n);
	printf("\n");
	daoNguocMang(a,n);
	xuatMang(a,n);
}
