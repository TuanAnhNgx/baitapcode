#include<stdio.h>

int main(){
	int n, i = 1, kq;
	printf("Nhap N: ");
	scanf("%d", &n);
	
	for(i = 1; i <=20; i++){
		kq = n * i;
		printf("\n%d x %d = %d", n, i, kq);
	}
	
	return 0;
}
