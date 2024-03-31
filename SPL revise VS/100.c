#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];

    printf("Enter string : ");
    gets(str);

    strrev(str);

    printf("\n%s\n",str);

    return 0;
}