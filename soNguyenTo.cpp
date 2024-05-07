#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number < 2) {
        printf("%d khong phai la so nguyen to\n", number);
        return 0; // Thoat chuong trinh
    }

    for (int i = 2; i < number - 1; ++i) {
        if (number % i == 0) {
            printf("%d khong phai la so nguyen to\n", number);
            return 0; // Thoat chuong trinh
        }
    }

    printf("%d la so nguyen to\n", number);
    return 0;
}
