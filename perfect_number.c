#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50];
    int t,i,z,sum=0;
    printf("\n enter the no. of test cases; ");
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<t;i++)
    {
        z=arr[i];
        for(int j=1;j<z;j++)
        {
           if(z%j==0)
            {sum=sum+j;
            printf("\n %d",j);
            }

        }
        if(sum==z)
            printf("\n Its a perfect no.");
        else
            printf("\n Not a perfect no.");

    }



    getch();
}
