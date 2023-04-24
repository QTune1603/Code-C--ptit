/*#include<stdio.h>
#include<math.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int i,j; 
	int flag=0; 
	for(i=2;i<=n;i++){
		for(j=2;j<=sqrt(i);j++){
		 	if(i%j==0){ 
				flag =1;          
			}
		}
		if (flag == 0) {
			printf("%d ",i);
		}
		flag = 0;
	}
}*/
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
	int i,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(kiem_tra_SNT(i)){
			printf("%d\n",i); 
		} 
	} 
} 
