#include<stdio.h>

int isPrime (int number){
	if (number < 2) {
        return 0; // Thoat chuong trinh
    }

    for (int i = 2; i < number - 1; ++i) {
        if (number % i == 0) {
            return 0; // Thoat chuong trinh
        }
    }
    return 1;
}

int main(){
	int n;
	//Nhap n
	printf("Nhap N: ");
	scanf("%d", &n);
	
	for(int i = 2; i <= n; i++)
	{
		if(isPrime(i) == 1){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
