#include<stdio.h>
int main()
{
    int n=10;
    int *ptr=&n;

    printf("Value of num : %d\n",n);
    printf("Address of n : %d\n",&n);
    
    
    printf("Value of ptr : %d\n",ptr);
    printf("Adress of ptr : %d\n",&ptr);
    printf("Value pointed by ptr : %d\n",*ptr);

    n = 10;
    printf("\n\nAfter changing value of num directly. \n");
    printf("Value of num         = %d \n", n);
    printf("Value pointed by ptr = %d \n\n", *ptr);

    *ptr = 100;
    printf("After changing value pointed by ptr. \n");
    printf("Value of num         = %d \n", n);
    printf("Value pointed by ptr = %d \n", *ptr);

    return 0;
}