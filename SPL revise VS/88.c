#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("Enter string : ");

    gets(ch);

    int lenth=strlen(ch);

    printf("\nLenth = %d\n",lenth);

    return 0;
}