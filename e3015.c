#include<stdio.h>
#include<math.h>
void Process (int n){
    int a[n];          
    int i;
    for (i = 0; i < n; i++){
        a[i] = 1; 
        printf("%d",a[i]);
    }  
    printf(" ");
    int check = 0; 
    while (check != n){
        while (a[n-1] != 9) {
            a[n-1]++;               
            for (i = 0; i < n; i++) printf("%d",a[i]);
            printf(" ");
        }
        for (i = n-1; i >= 0; i--){     
                                       
            if (a[i] < 9){
                a[i]++;               
                int j;
                for (j = i+1; j < n; j++){
                    a[j] = a[j-1];
                }
                for (i = 0; i < n; i++) printf("%d",a[i]);
                printf(" ");
                check = 0;
                break;
            }
            else check++;
        }
    }
    printf("\n"); 
}
/*int ktra(int x){
	int a,b;
	a = x%10;
	x /= 10;
	while(x > 0){
		b = x % 10;
		x /= 10;
		if(b > a){
			return 0;
		}
		a=b;
	} 
	return 1;
} */
int main ()
{
	int n,i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		Process(n); 
	}
	
 } 
