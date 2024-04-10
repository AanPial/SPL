#include<stdio.h>
int main()
{
    int a,b,sum,difference,product,qoutient,modulus;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    sum=a+b;
    difference=a-b;
    product=a*b;
    qoutient=a/b;
    modulus=a%b;

    printf("Sum is :%d\n",sum);
    printf("Difference is :%d\n",difference);
    printf("Product is :%d\n",product);
    printf("Qoutient is :%d\n",qoutient);
    printf("Modulus is :%d\n",modulus);

    return 0;
}
