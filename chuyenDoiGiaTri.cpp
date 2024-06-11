#include<stdio.h>

int convertKmToM(int n){
	int kq = n * 1000;
	return kq;
}
int convertCmToMm(int n){
	int kq = n * 10;
	return kq;
}
int main(){
	int n, select;
	do{
		printf("Nhap so N: ");
		scanf("%d", &n);
	}
	while(n<0);
	printf("\n");
	printf("\nXin moi ban chon cach chuyen doi: \n");
	printf("1: Km sang M.\n");
	printf("2: Cm sang Mm\n");
	scanf("%d", &select);
	switch(select){
		case 1: 
			{
				printf("Gia tri sau khi chuyen doi tu km sang m la: %d m", convertKmToM(n));
				break;
			}
		case 2:
			{
				printf("Gia tri sau khi chuyen doi tu cm sang mm la: %d mm", convertCmToMm(n));
				break;
			}
			
	}
}
