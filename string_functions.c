#include<stdio.h>
#include<conio.h>



void main()
{   int a,size;
    printf("\n Enter the size of array: ");
    scanf("%d",&size);
    char s[size];
    printf("\n Enter the string: ");
    gets(s[size]);
    for(a=0;s[a]!='\0';a++)
    {
         printf("%c",s[a]);
         //puts(s);
    }
    getch();


}

