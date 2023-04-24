#include<stdio.h>

int main()
{
	int i,t;
	long long n; 
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++){
		scanf("%lld",&n); 
		int check = 1;
  		while(n >0){
    		if((n % 10) % 2 == 1)
    		{
      			check = 0;
      			break;
    		}
    		n/=10; 
  		}
  
  		if(check == 1) printf("YES\n");
  		else printf("NO\n");
	}
}
