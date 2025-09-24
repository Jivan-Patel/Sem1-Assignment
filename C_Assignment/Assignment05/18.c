#include <stdio.h>

int main()
{    

    int n;
    scanf("%d",&n);

    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=n; j++){
    //         if(n-i+1>=j){
    //             printf("%c ", j + 'A' - 1);
    //         }
    //     }
    //     printf("\n");
    // }

    for(int i=1; i<=n; i++){
        for(int j=n; j>= i; j--){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}