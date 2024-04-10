#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Input string : ");
    gets(str);

    int i,len,n;
    char temp;
    len=strlen(str);
    n=len-1;

    for(i=0;i<=n;i++)
    {
        temp=str[i];
        str[i]=str[n];
        str[n]=temp;
        n--;
    }
    printf("\n%s\n",str);

    return 0;
}
