 #include<stdio.h>
 int factorial(int n)
 {
    if(n==1 || n==0)
    {
        return n;
    }
    return n*factorial(n-1);
 } 
 int main()
 {
    int n;
    scanf("%d",&n);
    int x=factorial(n);
    printf("Factorial is : %d\n",x);
 }