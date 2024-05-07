#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	printf("Nhap vao so b: ");
	scanf("%d", &b);
	printf("\n");
	if(a>b){
		printf("%d > %d", a, b);
		printf("\nSo lon la: %d", a);
		printf("\nSo be la: %d", b);
	}
	else{
		printf("%d > %d", b, a);
		printf("\nSo lon la: %d", b);
		printf("\nSo be la: %d", a);
	}
	return 0;
}
