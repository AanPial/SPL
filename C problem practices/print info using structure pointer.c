#include<stdio.h>
#include<string.h>


struct books
{
    char title[50];
    char aurthor[50];
    char group;
    int id;
};

struct books func(struct books *B)
{
    strcpy(B->title,"Telecom Billing.");
    strcpy(B->aurthor,"Zara Ali.");
    B->group = 'C';
    B->id = 1011;

    return *B;
}
int main()
{
    struct books b1;
    struct books *bptr;
    bptr = &b1;

    struct books bbtr=func(bptr);

    printf("%s",bbtr.title);
}
