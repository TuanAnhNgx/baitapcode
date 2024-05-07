#include<stdio.h>
#include<conio.h>
int main(){
	int i, vongLap;
	printf("Nhap so lan hien thi: ");
	scanf("%d", &vongLap);
	for(i = 1; i <= vongLap;i++)
	{
		printf("\n%d. Anh xin loi em nhieu.", i);		
	}
	getch();
	return 0;
}
