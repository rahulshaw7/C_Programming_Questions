#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int);

void main()
{
    int a,b;
    printf("\n Enter the number to be checked for prime no.: ");
    scanf("%d",&a);
    b=prime(a);
    if(b==1)
    printf("\n It is a prime no.");
    else
        printf("\n It is not a prime no.");
    getch();


}

int prime(int p)
{
    int s,i;
    s=ceil(sqrt(p));
    for(i=2;i<=s;i++)
    {
        if(p%i==0)
            break;
    }
    i=i-1;
    if(i==s)
    {
        return (1);
    }
    else
        return (0);
}
