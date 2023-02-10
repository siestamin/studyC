#include <stdio.h>
// inch = centimet * 0.393701
int main () {
    int nam = 20;
    float tocDo=3.1;
    float mucNuocBienDuKien= tocDo*nam;
    float centimet = mucNuocBienDuKien/10;
    float inch = mucNuocBienDuKien/2.54;
    printf ("Mực nước biển của 20 năm tới là %.2f cm và %2.f inch",centimet,inch);


}