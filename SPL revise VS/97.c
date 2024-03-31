#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];

    printf("Enter string1 : ");
    gets(str1);
    
    int i,alph=0,digit=0,others=0;
    
    for(i=0;str1[i]!='\0';i++)
    {
        if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a' && str1[i]<='z'))
        {
            alph++;
        }
        else if(str1[i]>='0' && str1[i]<='9')
        {
            digit++;
        }
        else if(str1[i]!=' ')
        {
            others++;
        }
    }

    printf("\nAlphabet = %d\n",alph);
    printf("\nDigit = %d\n",digit);
    printf("\nOthers = %d\n",others);

    return 0;
}