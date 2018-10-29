#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char Ch[100];
	printf("Nhap chuoi: ");
	gets(Ch);
	printf("Chuoi vua nhap la: ");
	puts(Ch);
	int length= strlen(Ch);
	printf("So ki tu cua chuoi: %d", length);
}
