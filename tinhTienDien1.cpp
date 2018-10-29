#include<stdio.h>
#include<conio.h>
int tienDien(int a, int b)
{
	int c= a-b;
	int kq;
	if(c<50)  kq= c*1500;
	else if(c>=50 && c<=100) kq= 49*1500+(c-49)*2000;
	else kq=49*1500+50*2000+(c-99)*2500;
	return kq;
}
main(){
	int sm, sc;
	printf("Bai toan tinh tien dien: ");
	printf("\nNhap so cu: ");
	scanf("%d", &sc);
	printf("Nhap so moi: ");
	scanf("%d",&sm);
	if(sc>sm) printf("Nhap lai");
	else printf("So tien dien cua ban la: %d ", tienDien(sm, sc));
}
