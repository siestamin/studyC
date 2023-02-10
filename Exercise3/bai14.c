#include <stdio.h>

void NhapThongTin(char hoTen, float luong, float thuong) {
    printf("Nhap vao ho ten cua nhan vien: ");
    scanf("%s", hoTen);

    printf("Nhap vao luong cua nhan vien: ");
    scanf("%f", luong);

    printf("Nhap vao thuong cua nhan vien: ");
    scanf("%f", thuong);
}

float TinhTongLuong(float luong, float thuong) {
    return luong + thuong;
}

int main() {
    char hoTen[100];
    float luong, thuong, tongLuong;

    NhapThongTin(hoTen, &luong, &thuong);
    tongLuong = TinhTongLuong(luong, thuong);

    printf("Ho ten: %s\n", hoTen);
    printf("Tong luong: %.2f\n", tongLuong);

    return 0;
}
