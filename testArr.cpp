#include <stdio.h>
 
int main() {
   int i, a, b, n;
   printf("Nhap so luong phan tu trong mang: ");
   scanf("%d", &n);
   int arr[n];
   for(int j = 0; j < n; j++){
   	printf("Nhap phan tu thu %d: ", j + 1);
   	scanf("%d", &arr[j]);
   }
   
   a = arr[0];
   b = arr[0];
   for(i = 1; i < n; i++) {
      if( a < arr[i] ) 
         a = arr[i];
      if( b > arr[i] ) 
         b = arr[i];
   }
   printf("Phan tu lon nhat cua mang la: %d", a);   
   printf("\nPhan tu nho nhat trong mang la: %d", b);
   return 0;
}
