#include <stdio.h>

int main() {
    int mang[] = {34, 3, 90, 6, 12, 7}; 
    int n = sizeof(mang) / sizeof(mang[0]); 

  
    for (int i = 1; i < n; i++) {
        int key = mang[i];  "
        int j = i - 1;      

        
        while (j >= 0 && mang[j] > key) {
            mang[j + 1] = mang[j];
            j = j - 1; 
        }

       
        mang[j + 1] = key;
    }

    
    for (int i = 0; i < n; i++) {
        printf("%3d", mang[i]);
    }

    return 0;
}

		
