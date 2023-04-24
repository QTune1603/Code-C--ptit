#include<stdio.h>

int main() {
	int x;
	scanf("%d",&x);
	int h,m,s;
	h=x/3600;
	m=x%3600/60;
	s=x%3600%60;
	printf("%02d:%02d:%02d",h,m,s); 
} 
