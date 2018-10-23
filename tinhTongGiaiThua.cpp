#include<stdio.h>
#include<conio.h>
int giaiThua(int N)
{	int k=1;
	for(int j=1; j<=N; j++)
	{
		k=k*j;
	}
	return k;
}

float tinhTong(int GT[50], int N)
{
	int s=0;
	
	float gt;
	for(int j=0; j<N; j++)
	{
		gt=giaiThua(GT[j]);
		s=s+gt;
	}
	return s;
}
int main(){
	int n;
	printf("So phan tu: \n");
	scanf("%d",&n);
	int Arr[n];
	printf("Nhap tung phan tu:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&Arr[i]);
	}
	printf("cac phan tu vua nhap: ");
	for(int i=0; i<n; i++)
	{
		printf(" %d",Arr[i]);
	}
	printf("\ntong giai thua cac phan tu trong mang: %f", tinhTong(Arr,n));
}
