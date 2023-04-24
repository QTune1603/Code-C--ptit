#include<stdio.h>
#include<math.h>

int main() {
	int n,T,i;
	scanf("%d",&T); 
	for(i=0;i<T;i++){
		scanf("%d",&n);
		int a = sqrt(n);
		if(a*a == n){
			printf("YES"); 
		} 
		else {
			printf("NO"); 
		} 
	} 
} 
