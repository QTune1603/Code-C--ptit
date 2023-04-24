#include<stdio.h>
int timMax(int x[],int n){
	int i,max=x[0]; 
	for(i=0;i<n;i++){
		if(max<x[i]) max=x[i];
	} 
	return max;
} 
int timChiSo(int x[],int n){
	int i;
	int max=timMax(x,n);
	for(i=0;i<n;i++){
		if(x[i]==max) printf("%d ",i);
	}
}
int main()
{
	int i,j,n,a[100],t;
	scanf("%d",&t);
	for(j=0;j<t;j++){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]); 
		} 
		printf("%d\n",timMax(a,n));
		timChiSo(a,n);
		printf("\n");
	}
	
 } 
