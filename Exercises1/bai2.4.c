#include <stdio.h>
int main () {
    int x = 5;
    int y=10;
    printf ("trước khi hóa đổi x = %d, y = %d",x,y);
    int temp = x;
    x=y;
    y=temp;
    printf("\nsau khi hoán đổi x = %d, y= %d",x,y);
}