#include <stdio.h>

// khai báo và định nghĩa hàm
int conghaiso(int x, int y) {
    return x + y;
}

int truhaiso(int x, int y) {
    return x - y;
}

int main() {
    int a, b, ketqua, luachon;
    printf("vui long nhap so a: \n");
    scanf("%d", &a);
    printf("vui long nhap so b: \n");
    scanf("%d", &b);
    printf("lua chon phep tinh:\n");
    printf("1. phep cong\n");
    printf("2. php tru\n");
    printf("nhap lua chon cua ban (1|2 \n)");
    scanf("%d", &luachon);
    //
    if (luachon == 1) {
        printf("chon phep cong\n");
        printf("ket qua: %d + %d =%d", a, b, a + b);
    } else if (luachon == 2) {
        printf("chon phep tru\n");
        printf("ket qua: %d - %d =%d", a, b, a - b);
    } else {
        printf("lua chon sai");
    }
    printf("%d", ketqua);


    return 0;
}
