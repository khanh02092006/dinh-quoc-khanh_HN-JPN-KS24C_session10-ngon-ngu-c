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
    printf("\n");

    
    int x;
    printf("Nhap mot so de tim trong mang: ");
    scanf("%d", &x);

    
    int left = 0, right = n - 1;
    int found = -1; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mang[mid] == x) { 
            found = mid;
            break;
        } else if (mang[mid] < x) { 
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }

    
    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, found);
    } else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}

