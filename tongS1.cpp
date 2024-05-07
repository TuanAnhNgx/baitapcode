#include<stdio.h>

int main(){
	int n;
	float S;
	
	printf("Nhap N: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		S = S + float(1)/ (float(2) * i);
	}
	
	printf("S = %f", S);
}
