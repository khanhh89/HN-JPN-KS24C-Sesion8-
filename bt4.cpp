#include <stdio.h>
	int main() {
    int arr[3][3] = {
        {10, 25, 5},
        {15, 30, 20},
        {8, 18, 35}
    };

    int max = arr[0][0];  // Kh?i t?o gi� tr? max b?ng ph?n t? d?u ti�n c?a m?ng

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];  // C?p nh?t max n?u t�m th?y ph?n t? l?n hon
            }
        }
    }
	printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
} 
