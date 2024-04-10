#include<stdio.h>
int main()
{
    char str[100];

    printf("Input string : ");
    gets(str);

    int i,vow=0,cons=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vow++;
        }
        else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vow++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }
    printf("\nVowel = %d\n",vow);
    printf("\nConsonant = %d\n",cons);

    return 0;
}
