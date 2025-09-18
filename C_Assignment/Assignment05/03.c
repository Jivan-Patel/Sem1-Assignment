#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i='A';i<'A'+n;i++){
        printf("%c ",i);
    }
    return 0;
}