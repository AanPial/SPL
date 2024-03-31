#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];

    printf("Enter string : ");
    gets(str);
    int i,word=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]==' ' || str[i+1]=='\0')&& ((str[i-1]>='A' && str[i-1]<='Z') || (str[i-1]>='a' && str[i-1]<='z') ))
        {
            word++;
        }
    }

    printf("\n%s\n",str);
    printf("\nTotal word = %d\n",word);

    return 0;
}