#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int num= n*(n+1)/2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                if(num<=9){
                    printf("%d  ",num);
                    num--;
                }
                else{
                    printf("%d ",num);
                    num--;
                }
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}