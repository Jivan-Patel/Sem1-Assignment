#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=n; j++){
            if(j>=i){
                printf("%d ", num);
                num++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    // int num=1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i-1; j++){
    //         printf("  ");
    //     }
    //     for(int k=n; k>=i; k--){
    //         printf("%d ", num);
    //         num++;
    //     }
    //     num=1;
    //     printf("\n");
    // }
    return 0;
}