#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Nhap chuoi ky tu: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; // Loai bo ky tu xuong dong

    reverseString(str);
    printf("Chuoi ky tu sau khi dao nguoc: %s\n", str);
    return 0;
}

