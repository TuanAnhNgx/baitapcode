#include<stdio.h>

int main(){
    int n;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    //Sap xep mang theo thu tu tang dan

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep la: ");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

