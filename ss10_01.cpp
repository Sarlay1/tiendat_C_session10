#include <stdio.h>

int main() {
    int mang[] = {10, 25, 30, 45, 60, 75};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    int phan_tu;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &phan_tu);

    int tim_thay = 0;
    for (int i = 0; i < kich_thuoc; i++) {
        if (mang[i] == phan_tu) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", phan_tu, i);
            tim_thay = 1;
            break;
        }
    }

    if (!tim_thay) {
        printf("Phan tu %d khong ton tai trong mang.\n", phan_tu);
    }

    return 0;
}

