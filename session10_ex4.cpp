#include <stdio.h>

int main() {
    int mang[] = {34, 3, 90, 6, 12, 7}; 
    int n = sizeof(mang) / sizeof(mang[0]); 

   
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (mang[j] > mang[j + 1]) { 
                int temp = mang[j];     
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }

    return 0;
}

