#include<stdio.h>
int main()
{
    char str[100];
    char ch;

    printf("Input string : ");
    gets(str);
    printf("Input character to search: ");
    scanf("%c",&ch);
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("'%c' is found at index %d\n",ch,i);
        }
    }

    return 0;
}
