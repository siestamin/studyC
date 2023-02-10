#include <stdio.h>
int main () {
    float r,chuVi,dienTich;
    const float PI = 3.141592f;
    printf("nhập bán kính r\n");
    scanf ("%f",&r);
    chuVi=r*2*PI;
    dienTich=r*r*PI;
    printf ("chu vi đường tròn có bán kính %.2f là %.2f\n ",r,chuVi);
    printf ("diện tích đường tròn có bán kính %.2f là %.2f",r,dienTich);
}