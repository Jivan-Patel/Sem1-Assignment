#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    
    for(int i=1; i<=n; i++){
        int num='A';
        for(int j=1; j<=2*i-1; j++){
            
            if(i>j){
                printf(" ");
            }
            else{
                printf("%c",num);
                num++;
            }

        }
        printf("\n");
    }

    return 0;
}