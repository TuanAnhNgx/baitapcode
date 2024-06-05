#include<stdio.h>

int average(int arr[], int n){
	float ave = 0;
	for(int i = 0; i < n; i++){
		ave += arr[i];
	}
	return ave/n;
}

int main(){
	int n;
	float kq;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	kq = average(arr, n);
	
	printf("Gia tri trung binh la: %.2f", kq);
	
	return 0;
}
