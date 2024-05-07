#include<stdio.h>

int main(){
	int i, n;
	float s;
	printf("Nhap gia tri gioi han cua phan so: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		s += 1 / i;
	}
	printf("S = %f", s);
	
	return 0;
}
