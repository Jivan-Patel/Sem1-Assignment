#include <stdio.h>

int main()
{    

    int n;
    scanf("%d",&n);
    for(int i='A'; i<='A'+n-1; i++){
        for(int j='A'; j<= (n+'A'-1)-(i-'A'+1)+1; j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}