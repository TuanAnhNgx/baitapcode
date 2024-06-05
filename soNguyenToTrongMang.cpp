#include<stdio.h>

bool isPrime(int n){
	if(n < 2){
		return false;
	}
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("Cac so nguyen to trong mang la: ");
	for(int i=0; i<n; i++){
		if(isPrime(arr[i])){
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
