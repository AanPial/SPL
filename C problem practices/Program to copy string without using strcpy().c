#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;

    printf("Enter string to str1 : \n");
    gets(str1);

    for(i=0;str1[i]!=0;i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';

    printf("Str1 : %s\n",str1);
    printf("Str2 : %s\n",str2);
    printf("Total character copied = %d\n",i);

    return 0;

}
