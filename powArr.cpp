#include<stdio.h>
#include<math.h>
int powValue(int arr[], int n){
	int kq;
	for(int i = 0; i < n; i++){
		kq += pow(arr[i], 2);
	}
	return kq;
}

int main(){
	int n;
	do{
		printf("Xin moi nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
	}
	while(n<0);
	int arr[n];
	
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nGia tri trung binh cua mang sau khi binh phuong la: %d", powValue(arr, n));
	
	return 0;
}
