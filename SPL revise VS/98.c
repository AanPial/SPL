#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100];

    printf("Enter string1 : ");
    gets(str1);
    
    int i,vowel=0,cons=0;
    
    for(i=0;str1[i]!='\0';i++)
    {
        if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a' && str1[i]<='z'))
        {
            if(str1[i] =='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || 
               str1[i] =='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U'  )
               {
                   vowel++;
               }
               else
               {
                   cons++;
               }
        }
        
    }

    printf("\nVowel = %d\n",vowel);
    printf("\nConsonant = %d\n",cons);
    

    return 0;
}