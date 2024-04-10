#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter string : ");
    gets(str);

    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
    }

    printf("Total vowel : %d\n",count);

    return 0;
}
