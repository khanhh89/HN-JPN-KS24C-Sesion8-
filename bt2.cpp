#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int x, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}