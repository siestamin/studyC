#include <stdio.h>

float average(float math, float literature) {
    return (math + literature) / 2;
}

int main()
{
    char name[100];
    float math, literature;

    printf("Nhap ho ten cua ban: ");
    scanf("%s", name);
    printf("Nhap diem toan: ");
    scanf("%f", &math);
    printf("Nhap diem van: ");
    scanf("%f", &literature);

    printf("Diem trung binh cua %s la: %.2f\n", name, average(math, literature));

    return 0;
}
