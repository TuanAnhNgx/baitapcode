#include<stdio.h>
int main(){
	int a, b, c, max;
	printf("Nhap vao 3 so: ");
	scanf("%d%d%d", &a, &b, &c);
	max = a; //gia su max = a
	if(b > max){
		max = b;
	}
	if(c > max){
		max = c;
	}
	printf("So lon nhat la: %d", max);
}
