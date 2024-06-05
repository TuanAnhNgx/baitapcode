#include <stdio.h>
int main(){
	char ten;
	float diem;
	printf("Ho va ten hoc sinh: ");
//	scanf("%s", &ten);
	gets(&ten);
	printf("Nhap vao diem so: ");
	scanf("%f", &diem);
	printf("\n");
	printf("Diem so cua %s la: %f\n", &ten, diem);
	if(diem > 0 && diem <10){
	if (diem >= 9){
	printf("Xep loai = Xuat sac\n");
	}
	else if (diem == 8 && diem < 9){
	printf("Xep loai = Gioi\n");
	}
	else if (diem == 5 && diem <= 7.9){
	printf("Xep loai = Kha\n");
}
	else if (diem < 5){
	printf("Xep loai = TBinh\n");
}
}
	return 0;
}
	 
