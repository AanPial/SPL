#include<stdio.h>
#include<string.h>
int main()
{
    char txt1[100],txt2[100];
    int len;

    printf("Enter any string to sring 1 : \n");
    gets(txt1);

    strcpy(txt2,txt1);

    printf("Text1 : %s\n",txt1);
    printf("Text2 : %s\n",txt2);

    len=strlen(txt2);

    printf("Total characters copied = %d\n",len);

    return 0;
}
