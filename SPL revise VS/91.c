#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],ch1[100];

    printf("Enter string : ");

    gets(ch);

    int i;

    for(i=0;ch[i]!='\0';i++)
    {
        ch1[i]=ch[i];
    }
    ch1[i]='\0';

    printf("\n%s\n",ch);
    printf("\n%s\n",ch1);

    return 0;
}