#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i+1; j--){
            printf("   ");
        }
        for(int j=1; j<=2*i-1; j++){
            if(num>=9){
                printf("%d ",num);
                num++;
            }
            else{
                printf("%d  ",num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}