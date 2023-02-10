#include <stdio.h>

int main() {
    int i;

    printf("mã ASCII tương ứng với kí tự từ 48 đến 127:\n");
    for (i = 48; i <= 127; i++) {
        printf("%d : %c\n", i, (char)i);
    }
    return 0;
}
