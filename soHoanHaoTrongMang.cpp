#include<stdio.h>

bool perfectNum(int n){
	int s = 0;
	for(int i = 1; i<=n/2; i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(s == n){
		return true;
	}
	else{
		return false;
	}
	
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
	
	printf("Cac so hoan hao la: ");
	for(int i=0; i<n; i++){
		if(perfectNum(arr[i])){
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
