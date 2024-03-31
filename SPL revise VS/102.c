#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],rtr[1000];

    printf("Enter string : ");
    gets(str);

    printf("\nString : %s\n",str);

    int i,len;

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        rtr[i]=str[len-i-1];
    }

    printf("\nReversed string : %s \n",rtr);

    return 0;
}