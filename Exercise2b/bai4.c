#include <stdio.h>
int main () {
    int a;
    int sum=0;
    printf("mời nhập a\n");
    scanf("%d",&a);
    for (int i = 1;i<=a;i++){
        sum=sum+i*i;
    } 
    printf("%d",sum);
    return 0;
}