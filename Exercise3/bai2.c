#include <stdio.h>

#include <stdbool.h>

bool lasonguyento ( int n ) {
    if ( n <= 1) {
        return false ;
    } for ( int i = 2; i < n ; i++) {
        if ( n % i == 0) {
            return false;
        }
    }
    return true;
}
int main () {
    int a ;
    scanf("%d",&a);
    for (int i = 2; i < a; i++){
        if ( lasonguyento(i)) {
            printf("%d\n",i);
        }  
    }
    // if ( lasonguyento(a)) {
    //        printf("la so nguyen to ");
    // } else {
    //     printf(" k la so nt");
    // }
  
   }
