#include<stdio.h>
void kiemtrasochan(int x[100],int n){
	int i;
 	for( i=0;i<n;i++) {
 		if(x[i]%2==0) printf("%d ",x[i]);
	 }
}
void kiemtrasole(int x[100],int n){
	int i;
 	for( i=0;i<n;i++) {
 		if(x[i]%2!=0) printf("%d ",x[i]);
	 }
}
int main(){
	int i,j,n,a[100];
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]); 
	} 
	kiemtrasochan(a,n);
	printf("\n");
	kiemtrasole(a,n);
	
} 
