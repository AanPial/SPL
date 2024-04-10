#include<stdio.h>

void toremove(char *str,char ch)
{
        int i,len;

    len=strlen(str);
    int mil=1;
    int tan;

    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            mil=0;
            tan=i;
        }
    }

    for(i=tan;i<len;i++)
    {
        str[i]=str[i+1];
    }
    printf("%s",str);
}
int main()
{
    char str[1000];
    char ch;

    printf("Enter string : ");
    gets(str);
    printf("Enter character to remove : ");
    scanf("%c",&ch);

    toremove(str,ch);

    return 0;
}

