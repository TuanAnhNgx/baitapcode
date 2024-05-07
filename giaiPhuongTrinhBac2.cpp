#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//Khai bao cac bien
	int a, b, c;
	float delta, x1, x2;
	
	//Cho phep nguoi dung nhap so
	printf("Xin moi nhap so A: ");
	scanf("%d", &a);
	printf("Xin moi nhap so B: ");
	scanf("%d", &b);
	printf("Xin moi nhap so C: ");
	scanf("%d", &c);
	
	//Them dieu kien de xet phuong trinh bac 2
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem.");
			}
			else{ //c khac 0 || doi nguoc voi c = 0
				printf("Phuong trinh vo nghiem.");
			}
		}
		else{ // b khac 0 || doi nguoc voi b = 0
			printf("Phuong trinh co nghiem = %f", -c/b);
		}
	}
	else{ // a khac 0. Khi a khac 0, phuong trinh tro thanh phuong trinh bac 2, tim delta va x1, x2 || doi nguoc voi a = 0
		delta = (b*b) - (4 * a * c);
		if(delta > 0){ // neu delta lon hon 0 thi phuong trinh co 2 nghiem x1 va x2
			x1 = ( -b + sqrt(delta) ) / ( 2 * a );
			x2 = ( -b - sqrt(delta) ) / ( 2 * a );
			printf("Phuong trinh co 2 nghiem phan biet.");
			printf("\nX1 = %f", x1);
			printf("\nX2 = %f", x2);
		}
		else if(delta == 0){ // neu delta = 0 thi phuong trinh co nghiem kep
			printf("Phuong trinh co nghiem kep: %f", -b / (2*a) );
		}
		else{
			printf("Phuong trinh vo nghiem.");
		}
	}
	getch();
	return 0;
}
