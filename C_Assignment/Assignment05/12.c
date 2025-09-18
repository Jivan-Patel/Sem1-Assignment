#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    
    for(int i=1; i<=n; i++){
        int c='A';
        for(int j=1; j<=n; j++){
            if(i+j<6){
                printf("  ");
            }
            else{
                printf("%c ",c);
                c++;
            }
        }
        printf("\n");
    }



    // int c='A';

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i+j<6){
    //             printf("  ");
    //         }
    //         else{
    //             printf("%c ",c);
    //             c++;
    //         }
    //     }
    //     c='A';
    //     printf("\n");
    // }


    return 0;
}