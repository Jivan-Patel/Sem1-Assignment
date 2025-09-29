#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

            int l = j-1;
            int r = n-j;
            int t = i-1;
            int b = n-i;

            if(l<=r && l<=t && l<=b){
                printf("%d",l + 1);
            }
            else if(r<=t && r<=b && r<=l){
                printf("%d",r + 1);
            }
            else if(t<=b && t<=r && t<=l){
                printf("%d",t + 1);
            }
            else if(b<=t&& b<=r && b<=l){
                printf("%d",b + 1);
            }
        }
        printf("\n");
    }
    return 0;
}