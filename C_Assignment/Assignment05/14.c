#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=n; j++){
            if(i+j>=n+1){
                printf("%d ",num);
                num++;
            }
            else{
                printf("  ");
            }
        }
        for(int j=1; j<=n; j++){
            if(j<=i-1){
                printf("%d ",num);
                num++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n - i; j++){
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= (2 * i - 1); k++){
    //         printf("%d ",k);
    //     }
    //     printf("\n");
    // }
    



    return 0;
}