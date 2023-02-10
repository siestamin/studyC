#include <stdio.h>
#include <stdbool.h>
int main () {
    int a;
    bool flag = true;
    printf("mời nhập a\n");
    scanf("%d",&a);
    if (a<2) {
        printf("không phải là sô nguyên tố\n");
        return 0;   
    }
    for(int i = 2;i<a;i++) {
        if (a%i==0) {
             flag = false;
            printf("không phải là số nguyên tố\n"); 
            break;
            
        }

    }if (flag) {
        printf("là số nguyên tố");
       
    } 


}