#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Vui long chon so tu 1 den 7: ");
		scanf("%d", &n);
	}
	while(n<1 || n > 7);
	
	switch(n){
		case 1:
			{
				printf("\nChu nhat");
				break;
			}
		case 2:
			{
				printf("\nThu hai");
				break;
			}
		case 3:
			{
				printf("\nThu ba");
				break;
			}
		case 4:
			{
				printf("\nThu tu");
				break;
			}
		case 5:
			{
				printf("\nThu nam");
				break;
			}
		case 6:
			{
				printf("\nThu sau");
				break;
			}
		case 7:
			{
				printf("\nThu bay");
				break;
			}
	}
}
