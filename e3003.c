#include<stdio.h>
#include<math.h>
 
int kiem_tra_SNT(int x){
	if(x<=1) return 0;
	int j; 
	for(j=2;j<=sqrt(x);j++){
		if(x%j==0) return 0; 
	} 
	return 1; 
}  

int main(){
	int n,dem=0,i=0;
	scanf("%d",&n);
	while(dem<n){ 
		if(kiem_tra_SNT(i)){
			printf("%d\n",i);
			dem++; 
		} 
		i++; 
	}
} 
