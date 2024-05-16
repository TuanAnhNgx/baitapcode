#include<stdio.h>
int sum(int n){
	int S = 0;
	for(int i = 1; i <= n; i++){
		if(i % 3 == 0 || i % 5 == 0){
			S += i;
		}
	}
	return S;
}
int main(){
	int n;
	printf("Nhap N: ");
	scanf("%d", &n);
	printf("Tong cac so tu 1 den %d ma chia het cho 3 hoac 5 la: %d", n, sum(n));
	return 0;
}
