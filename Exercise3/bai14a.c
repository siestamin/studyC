#include<stdio.h>

float TinhLuong(float luong, float thuong)
{
    return luong + thuong;
}

int main()
{
    char ten[100];
    float luong, thuong, tong_luong;

    printf("Nhap ho ten nhan vien: ");
    scanf("%[^\n]", ten);
    printf("Nhap luong nhan vien: ");
    scanf("%f", &luong);
    printf("Nhap thuong nhan vien: ");
    scanf("%f", &thuong);

    // tong_luong = TinhLuong(luong, thuong);

    printf("Tong luong cua nhan vien %s la: %.2f\n", ten, TinhLuong(luong,thuong));

    return 0;
}
