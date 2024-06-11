#include <stdio.h>

bool isPrime(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i<n-1; i++){
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(){
	int n, i;
	do{
	printf("Xin moi nhap so lon hon 2: ");
	scanf("%d", &n);
		if(isPrime == false)
		{
			printf("Day khong phai so nguyen to!");
		}
	}
while(isPrime(n) == false);
	
	printf("Day la so nguyen to!");

return 0;
}


