#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            printf("  ");
        }
        for(int l=1; l<=2*(n-i)+1; l++){
            printf("%c ", l + 'A' - 1);
        }
        printf("\n");
    }
    return 0;
}