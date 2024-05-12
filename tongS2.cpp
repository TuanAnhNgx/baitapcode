//tính tong các so chan tu 1 den 100 bang cách su dung vòng lap for và while áp dung hàm

#include<stdio.h> //Khai bao thu vien

int forLoop(){ //Su dung ham co vong lap for
	int S = 0;
	for(int i = 1; i<=100; i++){
		S += i;
	}
	return S;
}

int whileLoop(){ //Su dung ham co vong lap do while
	int i = 1, S = 0;
	do{
		S += i;
		i++;
	}
	while (i <= 100);
	return S;
}

int main(){ //Ham main
	printf("\nKet qua vong lap for: %d", forLoop());
	printf("\nKet qua vong lap do while: %d", whileLoop());
	
	return 0;
}
