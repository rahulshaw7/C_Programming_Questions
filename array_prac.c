#include<stdio.h>
#include<conio.h>

void search(int);
void main()
{
    int s,i;
    printf("\n Enter the size of Array: ");
    scanf("%d",&s);
    search(s);
    getch();

}

void search(int s)
{   int a[s];
    int num,count=0,i;
    printf("\n Enter %d elements in array: ",s);
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    printf("\n Enter the no. to be searched for: ");
    scanf("%d",&num);

    for(int i=0;i<s;i++)
    {
        if(num==a[i])
            count++;
    }
    if(count==0)
    printf("\n The Number you entered is not found..");
    else
    printf("\n Number %d is found %d times in array.",num,count);

}
