//Dem ky tu trong so N vua nhap
#include<stdio.h>
int charCounter(int n){
	int count = 0;
	if(n == 0){
		return 1;
	}
	else{
		int temp = n;
		while(temp != 0) { 
			temp /= 10;
			count++;
		}
		return count;
	}
}

int main(){
	int n;
	do{
		printf("Nhap so duong N: ");
		scanf("%d", &n);
		if(n < 0){
			printf("Ban da nhap sai. Vui long nhap so lon hon hoac bang 0\n");
		}
	}
	while(n<0);
	
	printf("So ban vua nhap la %d co %d ky tu.", n, charCounter(n));
	
	return 0;
}
