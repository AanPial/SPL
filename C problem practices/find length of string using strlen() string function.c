#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    int length;

    printf("Enter string : ");
    gets(ch);

    length=strlen(ch);

    printf("\nThe size : %d",length);

    return 0;
}
