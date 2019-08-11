#include<stdio.h>
#include<conio.h>

int max(int*,int);
int min(int*,int);

void main()
{   int s;
    printf("\n enter the no. of inputs");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);


    printf("Largest in given array is %d", max(a,s));
    printf("Minimum in give array is %d", min(a,s));
}
int max(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int min(int arr[],int n)
{
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    return min;
}
