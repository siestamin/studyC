#include <stdio.h>
int main () {
    int n,sum;
    printf("mời nhập n\n");
    scanf("%d",&n);
    sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    } printf("%d",sum);

}