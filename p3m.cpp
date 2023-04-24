#include<stdio.h>
#include<string.h>

int main()
{
	int n; 
	scanf("%d",&n);
	while(n>0){
		int i,soluong, max=-1e7, maxint = 1e7,kq = 0;
		scanf("%d",&soluong);
		int a[soluong];
		int b[200001] ;
		for(i=0;i<soluong;i++){
			int x;
			scanf("%d",&x);
			if(x>=0){
				a[i]=x;
				b[x]++; 
			} 
		}
			for(i=1;i<200001;i++){
				if(b[i]==0){
					kq=i;
					break; 
				} 
			} 
			printf("%d\n",kq);
			n--; 
		} 
} 

