#include<stdio.h>

 int main()
 {
 	//Dia chi bien
 	int var;
 	printf("Nhap var = ");
 	scanf("%d",&var);
 	printf("\n Gia tri cua var = %d", var);
 	printf("\n Dia chi cua bien var trong bo nho la: %p",&var);
 	
 	int *pc,c;
 	c = 5;
 	pc = &c;
 	printf("\n Gia tri cua c la: %d",*pc);
 	printf("\n Dia chi cua bien c la: %p",pc);
 	
 	*pc = 1;
 	printf("\n Gia tri cua c la: %d",c);
 	printf("\n Gia tri cua *pc la: %d",*pc);
 }
