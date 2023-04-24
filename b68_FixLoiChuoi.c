#include<stdio.h>


int main(){
	int tuoi;
	char ten[50];

	printf("Nhap vao tuoi cua ban:");
	scanf("%d", &tuoi);
	getchar();
	
	printf("Nhap vao ten cua ban: ");
	fgets(ten, sizeof(ten), stdin);
	
	printf("\nTen da nhap la: ");
	puts(ten);
	printf("\nTuoi: %d", tuoi);
	
}

