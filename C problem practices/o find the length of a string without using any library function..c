#include<stdio.h>
int main()
{
    char str[100];

    printf("Input : ");
    gets(str);

    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }

    printf("Length = %d",count);

    return 0;
}
