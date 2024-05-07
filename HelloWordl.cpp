#include<stdio.h>

int main(){
	//Khai bao bien
	int a, b, c;
	float kq;
	printf("Nhap So A B C: ");
	scanf("%d%d%d", &a, &b, &c);
	/*Phep cong: "+"
	Phep tru: "-"
	Phep nhan: "*"
	phep chia: */
	
	//Thuc hien phep cong
	kq = a + b + c;
	
	//In ket qua ra man hinh
	printf("Ket qua phep cong la: %f", kq);
	
	return 0;
}
