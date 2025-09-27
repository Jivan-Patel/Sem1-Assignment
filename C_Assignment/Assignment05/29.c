#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // for(int i=1; i<=n; i++){
    //     for(int j=n; j>=i+1; j--){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for(int i=n-1; i>=1; i--){
    //     for(int j=n; j>=i+1; j--){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    int i=1;
    while(i<=n){
        int j=n;
        while(j>=i+1){
            printf(" ");
            j--;
        }

        j=1;
        while(j<=2*i-1){
            printf("*"); 
            j++;
        }
        printf("\n");
        i++; 
    }
    
    i=n-1;
    while(i>=1){
        int j=n;
        while( j>=i+1){
            printf(" "); 
            j--;
        }

        j=1;
        while(j<=2*i-1 ){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }




    // for(int i=1; i<=n; i++){
    //     for(int j=n; j>=i+1; j--){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    //
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*(n-i)-1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    
    return 0;
}