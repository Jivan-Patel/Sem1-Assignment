#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>26 || n<1){
        printf("Enter a number between 1 to 26");
    }
    else{
        for(int i='A'; i<='A'+ n - 1; i++){
            for(int j='A'; j<'A'+n; j++){
                printf("%c ",j);
            }
            printf("\n");
        }
    }
    return 0;
}