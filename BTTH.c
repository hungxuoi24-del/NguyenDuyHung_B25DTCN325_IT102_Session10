#include <stdio.h>

int main() {
    int a[100], n = 0, ch, x, pos, i, j, t;

    do {
        printf("\n=== Quan ly danh sach so nguyen ===\n");
        printf("1. Them\n2. Xoa\n3. Cap nhat\n4. Tim kiem\n5. Hien thi\n6. Sap xep (Bubble Sort)\n7. Thoat\nChon: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: 
                printf("Nhap vi tri: "); scanf("%d", &pos);
                printf("Nhap gia tri: "); scanf("%d", &x);
                for(i=n;i>pos;i--) a[i]=a[i-1];
                a[pos]=x; n++;
                break;

            case 2:
                printf("Nhap vi tri can xoa: "); scanf("%d", &pos);
                for(i=pos;i<n-1;i++) a[i]=a[i+1];
                n--;
                break;

            case 3: 
                printf("Nhap vi tri can cap nhat: "); scanf("%d", &pos);
                printf("Nhap gia tri moi: "); scanf("%d", &x);
                a[pos]=x;
                break;

            case 4: 
                printf("Nhap gia tri can tim: "); scanf("%d", &x);
                for(i=0;i<n;i++)
                    if(a[i]==x) { printf("Tim thay tai vi tri %d\n", i); break; }
                if(i==n) printf("Khong tim thay!\n");
                break;

            case 5: 
                printf("Mang: ");
                for(i=0;i<n;i++) printf("%d ", a[i]);
                printf("\n");
                break;

            case 6: 
                for(i=0;i<n-1;i++)
                    for(j=0;j<n-i-1;j++)
                        if(a[j]>a[j+1]) { t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
                printf("Da sap xep!\n");
                break;

            case 7: 
                printf("Thoat chuong trinh.\n");
                break;

            default: printf("Lua chon khong hop le!\n");
        }
    } while(ch != 7);

    return 0;
}

