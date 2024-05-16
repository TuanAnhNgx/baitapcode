#include<stdio.h>

int printTrigger(int n){
	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
	return 0;
}

int main(){
	int n;
	
	printf("Nhap so N: ");
	scanf("%d", &n);
	
	//goi ham
	printTrigger(n);
}
