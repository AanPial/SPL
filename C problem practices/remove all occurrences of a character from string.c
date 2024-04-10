#include<stdio.h>

void toremove(char *str,char ch)
{
    int i,len,j;

    len=strlen(str);
    int mil=1;
    int tan;

    for(i=0; i<len; i++)
    {
        if(str[i]==ch)
        {
            tan=i;
            for(j=tan; j<len; j++)
            {
                str[j]=str[j+1];

            }
        }
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


