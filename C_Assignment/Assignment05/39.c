#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        int num='A';
        for(int j=1; j<=n; j++){
            if(i<=j){
                printf("%c ", num);
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