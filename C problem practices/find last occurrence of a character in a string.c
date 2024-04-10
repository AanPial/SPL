#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char ch;
    printf("Input string : ");
    gets(str);
    printf("Input character to search: ");
    scanf("%c",&ch);

    int i,len,match=0,ken;

    len=strlen(str);

    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            match=1;
            ken=i;

        }
    }
    if(match==0)
    {
        printf("%c is not found!",ch);
    }
    else
    {
        printf("%c is found at index %d",ch,ken);
    }

    return 0;
}

