#include<stdio.h>
int main() {
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    int n = 5;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[0][i];
        sum += arr[n-1][i];
    }
    
    for (int i = 1; i < n-1; i++) {
        sum += arr[i][0];
        sum += arr[i][n-1];
    }
		printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
	 return 0;
}
