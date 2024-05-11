#include<stdio.h>

//ham tim so chan le
int chanLe(int n){
	if(n % 2 == 0){
		return 0;
	}
	else{
		return 1;
	}
}

//ham tinh giai thua
int giaiThua(int n){
	int kq = 1;
	
	for(int i = 1; i <= n; i++){
		kq *= i; // 5! = 1 x 2 x 3 x 4 x 5
	}
	return kq;
}

int main(){
	int n, kqChanLe, kqGiaiThua;
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d", &n);
	}
	while(n <= 0);
	
	//goi ham
	kqChanLe = chanLe(n);
	kqGiaiThua = giaiThua(n);
	
	if(kqChanLe == 0){
		printf("\nSo ban vua nhap la so chan");
	}
	
	else{
		printf("\nSo ban vua nhap la so le");
	}
	printf("\nKet qua %d giai thua = %d", n, kqGiaiThua);
	return 0;
}
