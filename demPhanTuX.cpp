#include<stdio.h>

int main(){
	int n, x, count = 0;
   printf("Nhap so luong phan tu trong mang: ");
   scanf("%d", &n);
   int arr[n];
   for(int j = 0; j <= n-1; j++){ 
   	printf("Nhap phan tu thu %d: ", j + 1);
   	scanf("%d", &arr[j]); //0 1 2 3 4 Neu N = 5
   }
   
   printf("\n\n");
   
   printf("Nhap phan tu muon tim kiem: ");
   scanf("%d", &x);
   
   for(int i = 0; i<n; i++){
   	if(arr[i] == x){
   		count++;
	   }
   }
   printf("Phan tu ban chon la %d co %d lan lap lai trong mang", x, count);
   
   return 0;
}
