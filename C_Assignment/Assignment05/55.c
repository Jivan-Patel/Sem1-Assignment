#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        int num=0;
        for(int j=1; j<=n; j++){
            if(i+j>=n+1){
                num++;
                printf("%d ",num);
            }
            else{
                printf("  ");
            }
        }
        for(int j=i-1; j>=1; j--){
            num--;
            printf("%d ",num);
        }    
        printf("\n");
    }
    
    for(int i=n-1; i>=1; i--){
        int num=0;
        for(int j=1; j<=n; j++){
            if(i+j>=n+1){
                num++;
                printf("%d ",num);
            }
            else{
                printf("  ");
            }
        }
        for(int j=i-1; j>=1; j--){
            num--;
            printf("%d ",num);
        }    
        printf("\n");
    }

    // for(int i=1; i<=n;i++){
    //     int num=0;
    //     for(int j=1; j<=n; j++){
    //         if(i>=j){
    //             printf("  ");
    //         }
    //         else{
    //             num++;
    //             printf("%d ", num);
    //         }
    //     }
    //     for(int j=num-1; j>=1; j--){
    //         num--;
    //         printf("%d ",num);
    //     }
    //     printf("\n");
    // }
    

    return 0;
}