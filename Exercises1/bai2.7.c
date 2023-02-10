#include <stdio.h>
int main () {
    float chieuDai,chieuRong;
    printf ("nhập chiều dài\n");
    scanf ("%f",&chieuDai);
    printf ("nhập chiều rộng\n ");
    scanf ("%f",&chieuRong);
    float chuVi = (chieuDai+chieuRong)*2;
    float dienTich= chieuDai*chieuRong;
    printf ("chu vi hình chữ nhật là %2.f\n ",chuVi);
    printf ("diện tích hình chữ nhật là %2.f",dienTich);
}