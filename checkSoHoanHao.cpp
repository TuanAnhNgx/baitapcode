#include<stdio.h>

int checkNum(int n){
	int S= 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			S += i;
		}
	}
	return S;
}

int main(){
	int n, kq;
	printf("Nhap N: ");
	scanf("%d", &n);
	kq = checkNum(n);
	if(kq == n){
		printf("Day la so hoan hao");
	}
	else{
		printf("Day khong la so hoan hao");
	}
	return 0;
}
