#include <stdint.h>
int main () {
    int ngay;
    printf ("nhập số ngày:\n");
    scanf ("%d",&ngay);
    int tuan = ngay/7;
    int ngayConLai = ngay%7;
    printf ("%d tương đương với %d tuần và %d ngay",ngay,tuan,ngayConLai);
    

}