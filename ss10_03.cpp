#include <stdio.h>

int main() {
    int mang[] = {64, 34, 25, 12, 22, 11, 90};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 1; i < kich_thuoc; i++) {
        int key = mang[i];
        int j = i - 1;

        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j--;
        }
        mang[j + 1] = key;
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

