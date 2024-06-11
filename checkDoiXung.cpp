#include<stdio.h>

bool checkDoiXung(int arr[], int n){
	for(int i = 0; i < n/2; i++){
		if(arr[i] != arr[n-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	do{
		printf("Nhap so luong phan tu trong mang: ");
		scanf("%d", &n);
	}
	while(n<0);
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	if(checkDoiXung(arr, n)){
		printf("Day la mang doi xung!");
	}
	else{
		printf("Day khong phai mang doi xung!");
	}
	return 0;
}
