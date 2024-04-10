#include<stdio.h>
int main()
{
    char ch[1000];

    printf("Enter string : ");
    gets(ch);

    int i,count=0;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("Length = %d",count);

    return 0;
}
