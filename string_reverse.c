#include<stdio.h>
#include<conio.h>

char* reverse(char* );

void main()
{
    int i;
    char *q;

    char arr[20];

    printf("\n Enter the string: ");
   gets(&arr[0]);
    q=reverse(arr);
    printf("%s",q);
/*for(i=0;*(q+i)!='\0';i++)
{
    printf("%c",*(q+i));
}*/
    getch();
}


 char* reverse(char *p)
{
    char t;
    int l,i;
    for(l=0;(*(p+l))!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
return(p);


}
