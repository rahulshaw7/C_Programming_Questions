#include<stdio.h>
#include<conio.h>

int pali(char*);
void main()
{   int n;
    char a[50];
    printf("\n Enter the string:");
    gets(a);
    n=pali(a);
    if(n==1)
        printf("\n String is palindrome.");
    else
        printf("\n String is not palindrome.");
}

int pali(char *p)
{
    int i,j;


    for(i=0;*(p+i)!='\0';i++);

    for(j=0;j<i/2;j++)
    {
        if(*(p+j)!=*(p+i-1-j))

            break;
        }


   if(j==i/2)
   return (1);
   else
    return (0);

}

