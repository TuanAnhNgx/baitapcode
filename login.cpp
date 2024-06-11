#include<stdio.h>
#include<string.h>

int main(){
	char username[] = "admin";
	char password[] = "123456";
	
	char preUsername[50] = "", prePassword[50] = "";
	do{
		printf("Nhap tai khoan: ");
		gets(preUsername);
		printf("\nNhap mat khau: ");
		gets(prePassword);
		
		if(strcmp(preUsername, username) != 0 || strcmp(prePassword, password) != 0)
		{
			printf("Ban da nhap sai tai khoan hoac mat khau. Vui long nhap lai!\n");
		}
	}
	while(strcmp(preUsername, username) != 0 || strcmp(prePassword, password) != 0);
	
	printf("Xin chao ban.\n");
	
	return 0;
}

