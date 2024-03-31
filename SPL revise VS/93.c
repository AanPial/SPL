#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];

    printf("Enter string1 : ");
    gets(str1);

    printf("Enter string2 : ");
    gets(str2);
    int i, j = 0;
    int lenth = strlen(str1);

    if (str1[lenth - 1] == '\0')
    {
        str1[lenth - 1] = ' ';
    }

    for (i = lenth; str2[i] != '\0'; i++)
    {
        str1[i] = str2[j];
        j++;
    }

    str1[i] = '\0';

    printf("\nConcated string : %s\n", str1);

    return 0;
}