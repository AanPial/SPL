#include<stdio.h>
int main()
{
    char t1[100],t2[100];
    int i,j;

    printf("Enter first string : ");
    gets(t1);
    printf("Enter second string : ");
    gets(t2);

    i=0;
    while(t1[i]!='\0')
    {
        i++;
    }
    j=0;
    while(t2[j]!='\0')
    {
        t1[i]=t2[j];
        i++;
        j++;
    }

    t1[i]='\0';

    printf("Concatenated string = %s",t1);

    return 0;

}
