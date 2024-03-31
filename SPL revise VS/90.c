#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100],ch1[100];

    printf("Enter string : ");

    gets(ch);

    strcpy(ch1,ch);

    printf("\n%s\n",ch);
    printf("\n%s\n",ch1);

    return 0;
}