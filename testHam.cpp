#include<stdio.h>
bool isPrimeFor(int n){
	//su dung vong lap for
	for(int i = 2; i <= n-1; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

bool isPrimeWhile(int n){
	//su dung vong lap while
	int i = 2;
	do{
		if(n == 1 || n%i==0){
			return false;
		}
		if(n == 2){
			return true;
		}
		i++;
	}
	while(i <= n-1);
	return true;
}

int main(){
	int n;
	do{
		printf("Nhap N: ");
		scanf("%d", &n);
	}
	while(n<0);
	
		if( isPrimeWhile(n) ){
			printf("Day la so nguyen to");
		}
		else{
			printf("Day khong phai so nguyen to");
		}
	return 0;
}
