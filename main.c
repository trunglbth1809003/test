#include "stdio.h"
#include <stdlib.h>

int a, b;
int luachon;
int i = 1;

int phepcong(int a, int b) {
    return a + b;
}

int pheptru(int a, int b) {
    return a - b;
}

int phepnhan(int a, int b) {
    return a * b;
}

float phepchia(int q, int b) {
    if (b == 0) {
        printf(" khong the chia cho 0");
        exit(1);
    }
    return (float) a / b;
}

void taomenu() {
    printf("Ban muon gi:\n");
    printf("1. Lam phep cong\n");
    printf("2. Lam phep tru\n");
    printf("3. Lam phep nhan\n");
    printf("4. Lam phep chia\n");
    printf("5. thoat chuong trinh\n5");
}

int main() {
    while (1 == 1) {

        printf("vui long nhap so a: ");
        scanf("%d", &a);
        printf("vui long nhap so b: ");
        scanf("%d", &b);
        taomenu();
//    getchar();
        printf("nhap lua chon cua ban (1|2|3|4|5)\n");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                printf("ket qua: %d + %d =%d", a, b, phepcong(a,b));
                break;
            case 2:
                printf("ket qua: %d - %d =%d", a, b, pheptru(a,b));
                break;
            case 3:
                printf("ket qua: %d * %d = %d", a, b, phepnhan(a,b));
                break;
            case 4:
                printf("ket qua: %d / %d = %.4f\n", a, b, phepchia(a, b));
                break;
            case 5:
                printf("hen gap lai.");
                exit(1);
            default:
                printf("lua chon sai");
                break;

        }
        printf("\n");
    }

    return 0;

}
