#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int count=0;

    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
        else if(str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
