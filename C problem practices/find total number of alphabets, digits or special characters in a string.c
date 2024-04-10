#include<stdio.h>
int main()
{
    char str[1000];

    printf("Input string : ");
    gets(str);

    int alph=0,dig=0,other=0;
    int i;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
        else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            alph++;
        }
        else
        {
            other++;
        }
    }
    printf("\nAlphabets = %d\n",alph);
    printf("\nDigits = %d\n",dig);
    printf("\nSpecial characters = %d\n",other);

    return 0;
}
