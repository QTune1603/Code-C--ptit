#include<stdio.h>
#include<malloc.h> 
#include<stdlib.h> 

void nhapmt(int*a,int &n){
	printf("nhap n:");scanf("%d,&n");
	for(int i=0; i<0; i++){
		printf("a[%d]",i);
		scanf("%d",a+i);
	}
}

void xuatmt(int*a, int n){
	for(int i=0; i<n; i++){
		printf("%4d",*(a+i)); 
	}
}

void docfile(int*a, int &n){
	FILE*in ;
	in=fopen("bai13.in","rt");
	if(in == NULL){
		printf("Loi mo tep");
		exit(0);
	}
	fscanf(in,"%d",&n);
	if(n <= 0 || n > 100){
		printf("\Loi dinh dang");
		exit(0);
	}
	for(int i=0; i<n; i++){
	fscanf(in,"%d", a+i);
    }
    fclose(in);
	}

void ghifile(int *a, int n,FILE*out){
	out=fopen("bai13.out","wt");
	fprintf(out,"\Day so :");
	for(int i=0; i<n; i++){
		fprintf(f,"%d",a[i])
	
	fclose(f);
}
}

int tongboi3va5 (int*a,int n){
	int tong=0;
	for(int i=0; i<n; i++){
		if(a[i]%3==0&&a[i]%5==0){
			tong+=a[i];
		}
	}
	return tong;
}

int main (){
	int*a,n;
	FILE*f;
	a=(int*)malloc(50);
	nhapmt(a,n);
	docfile(a,n);
	xuatmt(a,n);
	ghifile(a,n);
	printf("\Tong boi 3 va 5 la : %d",tongboi3va5(a,n));
	free(a);
	return 0;
	
}
