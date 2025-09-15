#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);


    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i+j>=n+1){
                printf("%d ",num);
                num++;
            }
            else{
                printf("  ");
            }
        }
        num=1;
        printf("\n");
    }

  
    // for(int i=1; i<=n; i++){
    //     for(int j=n; j>=i; j--){
    //         printf("  ");
    //     }

    //     for(int k=1; k<=i; k++){
    //         printf("%d ",k);
    //     }  
        
    //     printf("\n");
    // }

   
    return 0;
}