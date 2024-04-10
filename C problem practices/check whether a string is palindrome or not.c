#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100];

    printf("Input string : ");
    gets(str);

    int i,n,len;

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    printf("\n%s\n",str1);
    n=len-1;
    for(i=0;i<n;i++)
    {
        char temp=str[i];
        str[i]=str[n];
        str[n]=temp;
        n--;
    }
    printf("\n%s\n",str);
    int palindrom=1;
    for(i=0;i<n;i++)
    {
        if(str[i]!=str1[i])
        {
            palindrom=0;
            break;
        }
    }
    if(palindrom==1)
    {
        printf("\nPalindrom\n");
    }
    else
    {
        printf("\nNot Palindrom\n");
    }

    return 0;
}
