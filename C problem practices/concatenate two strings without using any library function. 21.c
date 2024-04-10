#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("String 1 : ");
    gets(str1);
    printf("String 2 : ");
    gets(str2);

    int i,len=0;

    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    str1[len]=' ';

    for(i=0;str2[i]!='\0';i++)
    {
        str1[len+1+i]=str2[i];
    }
    str1[len+1+i]='\0';
    printf("%s",str1);

    return 0;
}
