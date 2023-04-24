#include<stdio.h> 

int main (){
	int i,n;
	scanf("%d",&n);
	int a[n],b[100000] ={0};
	for( i = 0; i < n ; i++){
		scanf("%d",&a[i]);
		int c = a[i];
		b[c]++;
	}
	int count = 0;
	for(i = 0; i < n ; i++){
		if(b[a[i]] == 1) printf ("%d",a[i]);
	}
	return 0;
}
