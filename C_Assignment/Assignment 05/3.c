#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(; n>26; n=n-26){

    }

    for(int i='A';i<'A'+n;i++){
        printf("%c ",i);
    }
    return 0;
}