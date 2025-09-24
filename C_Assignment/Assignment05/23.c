#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    
    for(int i=1; i<=n; i++){
        int c='A';
        for(int j=1; j<=n; j++){
            if(j>=i){
                printf("%c ", c);
                c++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }


    // int n2= 'A' + n - 1; 
    // int c='A';

    // for(int i='A'; i<=n2; i++){
    //     for(int j='A'; j<=i-1; j++){
    //         printf("  ");
    //     }
    //     for(int k=n2; k>=i; k--){
    //         printf("%c ", c);
    //         c++;
    //     }
    //     c='A';
    //     printf("\n");
    // }
    return 0;
}