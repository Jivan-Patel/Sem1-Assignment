#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
   
    int c='A';
    for(int i=1; i<=n; i++){
        for(int j=1;j<=n; j++){
            if(i>=j){
                printf("%c ", c);
                c++; 
                if(c>'Z'){
                    c='A';
                }
            }
        }
        printf("\n");
    }
    return 0;
}