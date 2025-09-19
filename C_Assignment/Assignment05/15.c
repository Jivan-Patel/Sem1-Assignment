#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n<=13 && n>=1){
        for(int i=1; i<=n; i++){
            int c='A';
            for(int j=1; j<=n; j++){
                if(i+j>=n+1){
                    printf("%c ",c);
                    c++;
                }
                else{
                    printf("  ");
                }
            }
            for(int j=1; j<=n; j++){
                if(i-1>=j){
                    printf("%c ",c);
                    c++;
                }
                else{
                    printf("  ");
                }
            }
        
            printf("\n");
        }
    }
    else{
        printf("Please Enter a number between 1 to 13");
    }

    // if(n<=13 && n>=1){
    //     for (int i = 1; i <= n; i++){
    //         for (int j = 1; j <= n - i; j++){
    //             printf("  ");
    //         }
    //         for (int k = 1; k <= (2 * i - 1); k++){
    //             printf("%c ", k + 'A' - 1);
    //         }
    //         printf("\n");
    //     }   
    // }
    // else{
    //     printf("Please Enter a number between 1 to 13");
    // }



    return 0;
}