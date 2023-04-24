#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i, j, stt = 0;
    for (i = 1; i <= n; i++){
        if (i % 2 != 0){
            for (j = 1; j <= i; j++){
                ++stt;
                printf("%d ",stt);
            }
        }
        else{
            stt += i;
            int k = stt;
            for (j = i; j >= 1; j--){
                printf("%d ",k);
                --k;
            }
        }
        printf("\n");
    }
}
