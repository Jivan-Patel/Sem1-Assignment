#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j == n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=n-1; j>=1; j--){
            if(i+j == n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(i+j == n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=n-1; j>=1; j--){
            if(i+j == n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    // for(int i=1; i<=n-1; i++){
    //     for(int j=1; j<=n-1; j++){
    //         if(i==j){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     for(int j=n-2; j>=1; j--){
    //         if(i==j){
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    
    return 0;
}