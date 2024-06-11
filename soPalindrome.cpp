#include<stdio.h>

bool checkDoiXung(int n){
	
	int reversedNumber = 0;
	int orinalNumber = n;
	
	while(n > 0) { // 121
		reversedNumber = reversedNumber * 10 + n % 10;
		n /= 10;
	}
	
	//so sanh reversedNumber vs orinalNumber
	
	if(reversedNumber == orinalNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(){
	int n;
	do{
		printf("Xin moi nhap N: ");
		scanf("%d", &n);
	}
	while(n<0);
	if(checkDoiXung(n)){
		printf("Day la so Palindrome!");
	}
	else{
		printf("Day khong phai so Palindrome!");
	}
	
	return 0;
}



