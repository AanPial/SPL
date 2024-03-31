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
    rtr[i]='\0';
    printf("\nReversed string : %s \n",rtr);

    int p=1;
    for(i=0;str[i]!='\0';i++)
    {
        if(rtr[i]!=str[i])
    {
        p=0;
        break;
    }
    }
    if(p==1)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not palindrom");
    }

    return 0;
}