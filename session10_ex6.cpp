#include <stdio.h>

int main() {
    int arr[] = {5, 12, 3, 7, 12, 1, 9, 12, 4, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int target;
    printf("Nh?p v�o m?t s? nguy�n d? t�m ki?m: ");
    scanf("%d", &target);

    int positions[n]; 
    int count = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            positions[count] = i; 
            count++; 
        }
    }

    
    if (count > 0) {
        printf("Ph?n t? %d du?c t�m th?y t?i c�c v? tr�: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Ph?n t? %d kh�ng t?n t?i trong m?ng\n", target);
    }

    return 0;
}
