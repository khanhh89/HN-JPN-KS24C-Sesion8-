#include <stdio.h>
int main() {
    int arr[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int n = 3;
    int sum = 0;

    printf("Cac phan tu tren duong cheo chinh:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum = sum + arr[i][i];
    }

    printf("\nTong ca phan tu tren duong cheo chinh: %d\n", sum);

    return 0;
}
