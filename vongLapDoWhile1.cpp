#include<stdio.h>

int main(){
	int i=1, n;
	float kq;
	//vong lap do while de ap dung dieu kien nhap
	do{
		printf("Nhap so duong N: ");
		scanf("%d", &n);
		
		if(n <= 0){
			printf("Ban da nhap sai. Vui long nhap so lon hon 0.");
		}
	}
	while(n<=0);
	
	//vong lap do while thay the vong lap for
	
	do{
		kq = kq + 1.0/(2.0 * i);
		i++;
	}
	while(i <= n);
	printf("Ket qua phep cong la: %f", kq);
	
}
