#include <stdio.h>
int main () {
      int a;
      scanf("%d",&a);
      uoc(a);
}
void uoc ( int n) {
  
    for ( int i = 1; i <= n ; i++ ) {
        if ( n % i == 0) {
           printf("%d\n",i);
        }
    }
}