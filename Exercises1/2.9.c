#include <stdio.h>
int main () {
    int goc1,goc2;
    printf ("nhập góc thứ nhất\n");
    scanf("%d",&goc1);
    printf("nhập góc thứ 2\n");
    scanf("%d",&goc2);
    int goc3 = 180 - goc1-goc2;
    printf ("góc thứ 3 là %d",goc3);
}