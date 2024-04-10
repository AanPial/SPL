#include<stdio.h>
#include<string.h>

void removefirst(char *str,char ch)
{
    int len,i;
    int found=0;

    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==ch && found==0)
        {
            found=1;
            continue;
        }
        if(found==1)
        {
            str[i-1]=str[i];
        }
    }
    str[i-1]='\0';
}

int main()
{
    char str[100];
    char ch;

    printf("Input string : ");
    gets(str);
    printf("Input character to remove : ");
    ch=getchar();

    removefirst(str,ch);

    printf("\n%s\n",str);

    return 0;
}
