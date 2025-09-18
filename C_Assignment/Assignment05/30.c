#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            printf("  ");
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            if(k<= (2*i-1)/2){                          //Incresing loop
                printf("%c ", k + 'A' - 1);
            }
        }
        printf("\n");          
    } 

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        for(int l=1; l<=2*(n-1-i)+1; l++){
            if(l<= (2*(n-1-i)+1)/2){                     //Incresing loop
                printf("%c ", l + 'A' - 1);
            }
        }
        printf("\n");
    }

        
    return 0;
}