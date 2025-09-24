#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",j);            
        }
        for(int j=i-1; j>=1; j--){
            printf("%d ",j);
        }        
        printf("\n");
    }

    // for(int i=1; i<=n; i++){
    //     int count=0;
    //     for(int j=1; j<=2*i-1; j++){
    //         if(j<=i){  // we can write i insted of (2*i-1)/2 +1)
    //             count++;
    //             printf("%d",count);
    //         }
    //         else{
    //             count--;
    //             printf("%d", count);
    //         }
    //     }
    //     printf("\n");
    // }

    return 0;
}