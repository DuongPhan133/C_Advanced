#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// Nhap mang

void input(int *a, int n)
{
	int i; 
	for (i=0;i<n;i++)
	{
	  printf("\na[%d]= ", i);
	  scanf("%d", a+i);
	}
	  
}

// Xuat mang

void output(int *a, int n)
{
	int i;
	for (i=0;i<n;i++)
      printf("%5d", *(a+i));
      printf("\n\n");
      
}

int max_arr (int *a, int n){
    int max, i, count=0;
    for ( i = 0; i < n; i++){
        max=*(a+i);
        count++;
        break;
    }
    
    for ( i = 0; i < n; i++){
        if (max < *(a+i))
        {
            max = *(a+i);
        }       
    }

    if (count != 0)
    {
        return max;
    } else {
        return 0;
    }
    }

void hoanvi(int *a, int *b)
{
	int tg;
	tg=*a;
	*a=*b;
	*b=tg;
}

int bedenlon(int *a, int n)
{
	int i,j; 
	for (i=0;i<n-1;i++)
	  for (j=i+1;j<n;j++)
	    if (*(a+i) > *(a+j))
	      hoanvi(a+i,a+j);
}

int londenbe(int *a, int n)
{
	int i,j; 
	for (i=0;i<n-1;i++)
	  for (j=i+1;j<n;j++)
	    if (*(a+i) < *(a+j))
	      hoanvi(a+i,a+j);
}

int main()
{
	int *a,i,n,option=0;
	printf("Nhap n= ");
	scanf("%d", &n);
	a= (int*)malloc(n*sizeof(int)); 
	
	input(a,n);
	printf("\nMang vua nhap la: ");
	output(a,n); 

	printf("Nhap 1 de tim so lon nhat\nnhap 2 de xuat mang tu be den lon\nnhap 3 de xuat mang tu lon den be");
    printf("\nChon option: ");
    scanf("\n%d", &option);

    if (option == 1){
        if (max_arr(a,n) == 0)
	        printf("Mang khong co phan tu nao");
	    else 
            printf("Phan tu max = %d\n\n", max_arr(a,n));
    } else if (option == 2){
        bedenlon(a,n);
        printf("Mang tu be den lon: ");
        output(a,n);
    } else if (option == 3){
        londenbe(a,n);
        printf("Mang tu lon den be: ");
        output(a,n);
    }
	getch(); 
	
}
