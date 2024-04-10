#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev,comp,i,digit;

    printf("Enter number : ");
    scanf("%d",&n);

    digit=log10(n);

    for(rev=0;n>0;n/=10)
    {
        rev=rev*10;
        rev=rev+(n%10);
    }
    for(i=0;i<=digit;i++)
    {
        comp=rev%10;
        switch (comp)
        {
        case 0 :
            printf("Zero ");
            break;
        case 1 :
            printf("One ");
            break;
        case 2 :
            printf("Two ");
            break;
        case 3 :
            printf("Three ");
            break;
        case 4 :
            printf("Four ");
            break;
        case 5 :
            printf("Five ");
            break;
        case 6 :
            printf("Six ");
            break;
        case 7 :
            printf("Seven ");
            break;
        case 8 :
            printf("Eight ");
            break;
        case 9 :
            printf("Nine ");
            break;
        default:
            printf("Not digit");
            break;
        }
        rev/=10;
    }
    return 0;
}
