#include <stdio.h>

int main() {
    int mang[] = {64, 44, 25, 12, 23, 11, 90};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < kich_thuoc - 1; i++) {
        for (int j = 0; j < kich_thuoc - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                int temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

