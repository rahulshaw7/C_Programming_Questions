#include<stdio.h>
#include<conio.h>

void main()

{   int i,j;
    int a[10];
    int b[10];
    printf("\n Enter the elements for 1st array: ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0,j=9;i<10,j>=0;i++,j--)
    b[j]=a[i];

    printf(" \n Array 1 is: ");
    for(i=0;i<10;i++)
        printf("-> %d",a[i]);


    printf("\n Array 2 is: ");
    for(j=0;j<10;j++)
        printf("-> %d",b[j]);

    getch();


}
