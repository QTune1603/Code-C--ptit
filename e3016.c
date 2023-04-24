#include<stdio.h>

int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
int main()
{
	int i,j,t,n;
	long long a,b,c,d;
	scanf("%d",&t);
	for( i = 0 ; i < t ; i++){
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(USCLN(a,b)==USCLN(c,d)) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
