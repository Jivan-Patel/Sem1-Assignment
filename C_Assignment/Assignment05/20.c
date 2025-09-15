#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int n2= 'A'+ n - 1;
    int num='A';
    for(int i='A'; i<=n2; i++){
        for(int j='A';j<=i; j++){
            printf("%c ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}