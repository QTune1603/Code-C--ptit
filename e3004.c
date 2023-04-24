#include<stdio.h>
 
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
long long BSCNN(long long a, long long b) {
    return (a * b) / USCLN(a, b);
}
 
int main() {
 	long long a, b;
    scanf("%lld %lld",&a,&b);
    printf("%d\n",  USCLN(a, b));
    printf("%lld", BSCNN(a, b));
}
