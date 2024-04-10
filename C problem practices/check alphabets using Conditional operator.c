#include<stdio.h>
int main()
{
    char c;

    printf("Enter character:");
    scanf("%c",&c);

    ((c>'a' && c<'z') || (c>'A' && c<'Z'))?
    printf("Alphabet") : printf("Not alphabet");

    return 0;
}

