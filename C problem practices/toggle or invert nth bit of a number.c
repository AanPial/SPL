#include<stdio.h>
int main()
{
    int n,num,newnum;

    printf("Enter any number:");
    scanf("%d",&num);

    printf("Enter nth bit to toggle (0-31):");
    scanf("%d",&n);

    newnum=num^(1<<n);

    printf("Bit toggled successfuly.\n\n");
    printf("Number before toggling 1 bit: %d (in decimal)",num);
    printf("\nNumber after toggling 1 bit: %d (in decimal)",newnum);

    return 0;
}
