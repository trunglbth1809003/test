#include <stdio.h>
int a, b, ketqua, luachon;
int main() {

    printf("vui long nhap so a: \n");
    scanf("%d", &a);
    printf("vui long nhap so b: \n");
    scanf("%d", &b);
    printf("lua chon phep tinh:\n");
    printf("1. phep cong\n");
    printf("2. phep tru\n");
    printf("3. phep nhan\n");
    printf("4. phep chia\n");
    printf("nhap lua chon cua ban (1|2|3|4\n)");
    scanf("%d", &luachon);
    if (luachon == 1) {
        printf("chon phep cong\n");
        printf("ket qua: %d + %d =%d", a, b, a + b);
    } else if (luachon == 2) {
        printf("chon phep tru\n");
        printf("ket qua: %d - %d =%d", a, b, a - b);
    } else if (luachon == 3) {
        printf("chon phep nhan\n");
        printf("ket qua: %d * %d = %d", a, b, a * b);
    } else if (luachon == 4) {
        printf("chon phep chia\n");
        printf("ket qua: %d / %d = %0.3f", a, b, (float) a / b);
    } else {
        printf("lua chon sai");
    }


    return 0;
}
