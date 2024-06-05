#include<stdio.h>

int main(){
	int n, s = 1;
	printf("Xin moi nhap so: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n*n; i++){
		s = s * i;
	}
	
	printf("Binh phuong cua giai thua %d la: %d.", n, s);
	
	return 0;
}
