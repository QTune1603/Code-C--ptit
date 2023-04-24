#include<stdio.h>
#include<math.h>

int repeatspace(int n){
	while(n>0){
		printf(" ");
		n--;
	}
}
int repeatsao(int n){
	while(n>0){
		printf("*");
		n--;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int phantren=n-1,phanduoi=n-1;
	int i=0;
	
	while(i<=phantren){
		if(i==1){
			printf("*\n");
		}
		else if(i==2){
			printf("**\n");
		}
		else if(i>2){
			printf("*");
			repeatspace(i-2);
			printf("*\n");
		}
		i++;
	}
	repeatsao(2*n-1);
	printf("\n");
	i=n;
	
	while(phanduoi>0){
		if(2*n-1-i==2){
			repeatspace(i);
			printf("**\n");
		}
		else if(2*n-1-i==1){
			repeatspace(i);
			printf("*\n");
		}
		else if(2*n-1-i>2){
			repeatspace(i);
			printf("*");
			repeatspace(2*n-3-i);
			printf("*\n");
		}
		
		phanduoi--;
		i++;
	}
}
