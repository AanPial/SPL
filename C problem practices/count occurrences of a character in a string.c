#include<stdio.h>
int main()
{
    char str[100];
    char ch;

    printf("Input any string : ");
    gets(str);
    printf("Input character to search: %c",ch);
    scanf("%c",&ch);

    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch || ch==str[i]-'A'+'a' || ch==str[i]-'a'+'A')
        {
            count++;
        }
    }
    printf("\nTotal occurrences of '%c': %d\n",ch,count);

    return 0;
}
