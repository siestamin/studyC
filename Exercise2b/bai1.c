#include <stdio.h>
int main () {
    int a,sum;
    printf("mời nhập a \n");
    scanf("%d",&a);
    sum=0;
    for(int i=1; i<=a;i++) {
        sum+=i;
    } printf("%d",sum);
}