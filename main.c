#include "stdio.h"
#include <stdlib.h>

int a, b;
char luachon;

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
    printf("lua chon phep tinh:\n");
    printf("1. phep cong\n");
    printf("2. phep tru\n");
    printf("3. phep nhan\n");
    printf("4. phep chia\n");
}

int main() {

    printf("vui long nhap so a: ");
    scanf("%d", &a);
    printf("vui long nhap so b: ");
    scanf("%d", &b);
    taomenu();
//    getchar();
    fgetc(stdin);
    printf("nhap lua chon cua ban (+|-|*|/)\n");
    scanf("%c", &luachon);
    switch (luachon) {
        case '+':
            printf("ket qua: %d + %d =%d", a, b, a + b);
            break;
        case '-':
            printf("ket qua: %d - %d =%d", a, b, a - b);
            break;
        case '*':
            printf("ket qua: %d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("ket qua: %d / %d = %.4f", a, b, phepchia(a, b));
            break;
        default:
            printf("lua chon sai");
            break;
    }

    return 0;
}
