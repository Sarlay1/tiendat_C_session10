#include <stdio.h>

int main() {
    int mang[] = {64, 34, 25, 12, 22, 11, 90};
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    for (int i = 0; i < kich_thuoc - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < kich_thuoc; j++) {
            if (mang[j] < mang[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = mang[i];
            mang[i] = mang[min_index];
            mang[min_index] = temp;
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < kich_thuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

