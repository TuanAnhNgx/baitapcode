#include<stdio.h>
#include<conio.h>
int main(){
	int tuoi;
	char ten[50];
	printf("Xin moi nhap ho va ten cua ban: ");
	gets(ten);
	printf("Xin moi nhap so tuoi cua ban: ");
	scanf("%d", &tuoi);
	
	if(tuoi >= 15 && tuoi <18)
	{
		printf("\nXin chao ban %s", &ten);
		printf("\nChuc mung ban da du tuoi hoc cap 3");
	}
	else if(tuoi >=18)
	{
		printf("\nXin chao ban %s", &ten);
		printf("\nChuc mung ban da du tuoi hoc dai hoc");
	}
	else
	{
		printf("\nXin chao ban %s", &ten);
		printf("\nChung toi rat tiec, ban chua du tuoi de hoc cap 3");
	}
	getch();
	
	return 0;
}

