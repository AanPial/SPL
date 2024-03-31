#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];

    printf("Enter string : ");
    gets(str);

    printf("\nString : %s\n",str);

    int i,len;

    len=strlen(str);
    printf("\n\n%d\n\n",len);
    char temp;

    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }

    printf("\nReversed string : %s \n",str);

    return 0;
}