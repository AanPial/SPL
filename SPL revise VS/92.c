#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];

    printf("Enter string1 : ");
    gets(str1);

    printf("Enter string2 : ");
    gets(str2);
    
    strcat(str1, str2);

    printf("\n%s\n",str1);

    return 0;
}