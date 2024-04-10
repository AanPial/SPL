#include<stdio.h>
int main()
{
    char ch[1000];
    int lenght,i,count=0;

    printf("Enter string : ");
    gets(ch);
    puts(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("\Length = %d",count);

    return 0;
}
