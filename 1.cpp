#include<stdio.h>
#define MAX 100
void NHAPSL(int &n)
{
	do{
		printf ("Nhap so phan tu 0<sl<%d:",MAX);
		scanf("%d",&n);
		
	}while (n<=0 || n>MAX);
	
	
}
void NhapMang (int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void XuatMang (int a[],int n)
{
	printf("\nMang gom cac phan tu:\n");
	for(int i=0;i<n;i++)
	    printf ("%5d",a[i]);
	    
}
int TinhTong(int a[],int n)
{
	int tong = 0;
	for(int i=0;i<n;i++)
	{
		tong = tong + a[i];
		
	}
	return tong;
	
}
float TinhTrungBinhCong(int a[],int n)
{
	int tong,TB =0;
	tong = TinhTong(a,n);
	TB = tong / n;
	return TB;
	
}
void SapXep(int a[],int n)
{
	int tam;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tam = a[j];
				a[i] = a[j];
				a[j] = tam;
				
			}
		}
	}
}
int TimX(int a[],int n,int X) 
 {
   for(int i=0;i<n;i++)
  {
  	if(X == a[i])
  	    return i;
    
  }
  return -1;
}
int main()
{
	int a[MAX],n;
	NHAPSL(n);
	NhapMang(a,n);
	XuatMang(a,n);
	
	printf("\nTong cac phan tu: %d",TinhTong(a,n));
	printf("\nTong trung binh cong: %0.0f",TinhTrungBinhCong(a,n));
	
	printf("\nMang sau khi sap xep: ");
	SapXep(a,n);
	XuatMang(a,n);
	int X;
	printf("\nNhap X can tim:  ");
	scanf("%d ",&X);
	
	int vt = TimX(a,n,X);
	if(vt != -1)
	{
		printf ("\nTim thay X o vi tri : %d",vt);
		
	}
	else 
	printf ("\nKhong tim thay X");
	return 0;
}
