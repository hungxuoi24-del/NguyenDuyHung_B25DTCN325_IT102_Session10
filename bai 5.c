#include <stdio.h>

int main() {
    int n, i, x, count = 0;
    int a[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
        if (a[i] == x)
            count++;

    if (count == 0)
        printf("Khong tim thay");
    else
        printf("%d", count);

    return 0;
}

