#include<stdio.h>

int sum(int arr[], int n){
	int S;
	for(int i = 0; i < n; i++){
		S += arr[i];
	}
	return S;
}

int main(){
	int n, kq;
	
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	//truyen mang vao ham
	kq = sum(arr, n);
	
	printf("Tong gia tri cua mang la: %d", kq);
}
