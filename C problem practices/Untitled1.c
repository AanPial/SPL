#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("filename.txt","r");

    if(fptr==NULL)
    {
        printf("Not opening");
    }
    fclose("fptr");

    return 0;
}
