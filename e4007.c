#include <stdio.h>
int main(){
    int a[1000];
    int luu_tru[1000];
    int n, i;
    scanf("%d",&n);
    for (i = 0; i < n; i++) scanf("%d",&a[i]);  
    int range = 0;
    int j;
    for (i = 0; i < n; i++){
        int check = 0;
        for (j = 0; j < n; j++){
            if (a[i] == a[j] && i != j){
                check = 1;
                break;
            }
        }
        if (check == 0){
            range++;
            luu_tru[range] = a[i];
        }
    }
    printf("%d\n",range);
    for (i = 1; i <= range; i++) printf("%d ",luu_tru[i]);
}
