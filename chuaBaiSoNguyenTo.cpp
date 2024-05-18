#include<stdio.h>

//Ham kiem tra so nguyen to
int isPrime(int n){
	int i = 2;
	
	if(n < 2 ){
		return 0;
	}

	//bat dau vong lap do while
	do{
		
		if(n % i == 0){
			if(n == 2){
				return 1;
			}
			return 0;
		}
		i++;
	}
	while(i < n - 1);
	return 1;
}

int main(){
	int n, i = 2;
	do{
		printf("Nhap vao so nguyen duong: ");
		scanf("%d", &n);
	}
	while(n <= 0);
	
	//Goi ham va in ra cac so nguyen to
	
	do{
		if(isPrime(i) == 1){
			printf("%d ", i);
		}
		i++;
	}
	while(i <= n);
	
	return 0;
}
