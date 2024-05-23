#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	
	int tempA = a, tempB = b;
	
	do{
		if(tempA > tempB){
		tempA -= tempB;
		}
		else{
			tempB -= tempA;
		}
	}
	while(tempA != tempB);
	
	printf("Uoc chung lon nhat cua %d va %d la %d", a, b, tempA);
	
	return 0;
}
