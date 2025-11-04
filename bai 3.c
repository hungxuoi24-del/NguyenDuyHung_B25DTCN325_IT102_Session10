#include <stdio.h>

int main() {
    int n, i, searchValue, found = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &searchValue);
    for (i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            printf("Tim thay gia tri %d tai chi so %d\n", searchValue, i);
            found = 1;
            break;  
        }
    }

    if (!found)
        printf("Khong tim thay phan tu can tim\n");

    return 0;
}

