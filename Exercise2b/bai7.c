#include <stdio.h>
int main () {
    int a,sum;
    printf("mời nhập số n\n");
    scanf("%d",&a);
    sum=0;
    for(int i=2;i<=a;i++) {
        if (i%2==0){
            sum+=i;
        } 
    } printf("%d",sum);
}