#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]={'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};

    printf("\n%s\n\n",ch);

    char ch1[]="\n\nHello World!\n\n";
    
    printf("%s\n\n",ch1);
    
    char ch2[20];
    
    printf("Enter : ");
    gets(ch2);

    printf("\n%s\n\n",ch2);

    return 0;
}