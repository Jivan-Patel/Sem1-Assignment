#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            
            if(i>j){
                printf(" ");
            }
            else{
                printf("*");
            }

        }
        printf("\n");
    }



    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=2*i-1; j++){
            
    //         if(i<=j && j<=2*i-1){
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