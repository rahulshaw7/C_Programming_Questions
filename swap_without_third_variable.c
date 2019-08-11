#include<stdio.h>
#include<conio.h>

void swap(int* , int*);

void main()
{
    int a,b;
    printf("enter two no.: ");
    scanf("%d%d",&a,&b);
    printf("\n No. before swapping, a= %d and b=%d",a,b);
    swap(&a,&b);
    printf("\n No. after swapping, a= %d and b=%d",a,b);
    getch();
}

void swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
