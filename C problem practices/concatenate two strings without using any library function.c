#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);

    int i,len;
    len=strlen(str1);
    str1[len]=' ';
    for(i=0;str2[i]!='\0';i++)
    {
        str1[i+len+1]=str2[i];
    }
    str1[i+len+1]='\0';
    printf("%s",str1);

    return 0;

}
