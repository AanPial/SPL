#include<stdio.h>
void func(char n);
int main()
{
    char x;
    printf("Enter value : ");
    scanf("%c",&x);
    func(x);
    return 0;
}
void func(char n)
{
    printf("Value received from main: %c\n",n);
    return;
}
