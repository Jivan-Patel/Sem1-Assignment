#include <stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

   

    // for(int i=1; i<=n; i++){
    //     for(int j=n; j>=i; j--){
    //         printf("  ");
    //     }

    //     for(int k=1; k<=i; k++){
    //         printf("%d ",k);
    //     }  
        
    //     printf("\n");
    // }



    for(int i=1; i<=n; i++){
        int num=1;
        for(int j=1; j<=n; j++){
            if(i+j>n){
                printf("%d ",num);
                num++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

  
   
    return 0;
}