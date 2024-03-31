#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];

    printf("Enter string : ");

    gets(ch);

    int i,count=0;

    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }

    printf("\nLenth = %d\n",count);

    return 0;
}