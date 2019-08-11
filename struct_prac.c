#include<stdio.h>
#include<conio.h>

struct rahul
{
    int age;
    char a[30];
    float p;

};

void main()
{   int l,m;
    char s[30];
    struct rahul x,y;
    printf("\nEnter the name: ");
    gets(s);
    for(int l=0;s[l]!='\0';l++);
    for(int m=0;m<l;m++)
    x.a[m]=s[m];
    printf("\nEnter age: ");
    scanf("%d",&(x.age));
    printf("\nEnter percentage: ");
    scanf("%f",&(x.p));

    y=x;

    printf("\n Name: %s",(x.a));
    printf("\n Age: %d",(x.age));
    printf("\n Percentage: %f",(x.p));

    printf("\n\n value in Y:");

    printf("\n Name: %s",(y.a));
    printf("\n Age: %d",(y.age));
    printf("\n Percentage: %f",(y.p));
}
