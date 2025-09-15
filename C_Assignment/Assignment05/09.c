#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>26 || n<1){
        printf("Enter a number between 1 to 16");
    }
    else{
        for(int row='A'; row<='A'+n-1; row++){
            for(int col='A'; col<=row; col++){
                printf("%c ",col);
            }
            printf("\n");
        }
    }
    return 0;
}