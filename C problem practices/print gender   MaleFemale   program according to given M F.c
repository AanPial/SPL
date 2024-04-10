#include<stdio.h>
int main()
{
    char gender;

    printf("Enter gender(M/m or F/f):");
    scanf("%c",&gender);

    switch(gender)
    {
    case 'm':
    case 'M':
        printf("Male.");
        break;

    case 'f':
    case 'F':
        printf("Female.");
        break;

    default:
        printf("Unspecified Gender\n");
    }

    return 0;
}
