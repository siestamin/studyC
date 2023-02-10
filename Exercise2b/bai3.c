#include <stdio.h>
#include <math.h>
int main () {
 int a,n;
 double kq;
printf("moi nhap a\n");
scanf("%d",&a);
printf("moi nhap n\n");
scanf("%d",&n);
kq = pow(a,n);
printf("%d lũy thừa %d là %2.lf",a,n,kq);
}