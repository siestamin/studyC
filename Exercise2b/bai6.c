#include <stdio.h>
int main () {
    int a;
    printf("mời nhập a\n");
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}