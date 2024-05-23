#include<stdio.h>

int main(){
	int n, s;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n]; //khai bao mang voi N phan tu
	
	//su dung vong lap de gan bien cho cac phan tu trong mang
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\nCac phan tu trong mang la: \n");
	
	//vong lap tinh tong cac phan tu trong mang
	for(int i = 0; i < n; i++){
		s += arr[i];
	}
	printf("Tong cac phan tu trong mang la: %d", s);
	return 0;
}

