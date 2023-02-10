#include <stdio.h>
int main () {
    int gio,phut;
    printf ("nhập giờ:\n");
    scanf ("%d",&gio);
    printf ("nhập phút:\n");
    scanf ("%d",&phut);
    int tong = gio * 60 + phut;
    printf ("%d",tong);

}