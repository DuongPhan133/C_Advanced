#include <stdio.h>
// #include <conio.h>
#include <malloc.h>

// Nhap mang

void nhap(int *a, int n)
{
	int i; 
	for (i=0;i<n;i++)
	{
		printf("\na[%d]= ", i);
		scanf("%d",a+i);
	}
}

void xuat(int *a, int n)
{
	int i; 
	for (i=0;i<n;i++)
	printf("%5d", *(a+i));
	printf("\n\n");
}

// Ham tach

void tach (int *a, int na, int *b, int *nb, int *c, int *nc)
{
	int i,n1=0,n2=0;
	for (i=0;i<na;i++)
	{
		if (*(a+i)%2==0)
		{
			*(b+n1)=*(a+i);
			n1++;
		}
		else 
		{
			*(c+n2)=*(a+i);
			n2++;
		}
	}
	*nb=n1;
	*nc=n2;
}

// Ham chinh

int main()
{
	int *a,*b,*c,n,nb,nc;
	do
	{
		printf("\nNhap n= ");
		scanf("%d",&n);
	}
	while (n<0||n>50);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	c=(int*)malloc(n*sizeof(int));
	nhap(a,n);
	printf("\nMang vua nhap la: ");
	xuat(a,n);
	tach(a,n,b,&nb,c,&nc);
	printf("\nCac mang da tach la\n");
	printf("\nMang 1 - Mang so chan: ");
	xuat(b,nb);
	printf("\nMang 2 - Mang so le: ");
	xuat(c,nc);
	// getch();
}
