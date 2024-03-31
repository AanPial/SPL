#include<stdio.h>
int main()
{
    char ch;

    printf("Enter character : ");
    scanf("%c",&ch);

    ((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z'))?printf("IT is a Alphabet."):printf("IT is not a Alphabet.");

    return 0;
}
