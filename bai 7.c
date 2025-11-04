#include <stdio.h>

int main() {
    int n, i, x, left, right, mid;
    int a[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang (da sap xep tang dan): ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == x) {
            printf("%d", mid);
            return 0;
        } else if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Khong tim thay");
    return 0;
}

