#include<stdio.h>
#include<conio.h>

void main()
{
    int len,val;
    char s[10];
    char a[50];
    char p[10]="INDIA";
    printf("\n Enter the string: ");
    gets(s);
    len=strlen(s);
    strrev(s);

    printf("\n Length of the string is: %d",len);
    printf("\n Reversed string is: %s",s);

    strrev(s);
    strcpy(a,s);
    strcat(a,p);
;
    printf("\n Copied string is: %s",a);
if(strcmp(a,s)==0)
    printf("\n String is matched.");
else
    printf("\n String is not matched");
    getch();
}
