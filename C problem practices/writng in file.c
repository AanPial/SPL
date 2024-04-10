#include<stdio.h>
#include<string.h>
int main()
{
    FILE*pfp;

    pfp=fopen("Pial1.txt","r");

    int c;
    c=65;

    fputc(65,pfp);
    fputc(c,pfp);

    char str1="\nstring1 using fputs\n";
    fputs(str1,pfp);
    fputs("\nstring1 using fputs\n",pfp);

    char str2="\nstring2 using fputs\n";
    fprintf(pfp,"\nstring2 using fputs\n");
    fprintf(pfp,"%s %c",str2,c);



    return 0;

}
