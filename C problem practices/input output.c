#include<stdio.h>
int main()
{
    char character;
    int x;
    float y;
    double z;
    char string[100];

    printf("Character:");
    scanf("%c",&character);
    printf("c:%c\n",character);

    printf("X:");
    scanf("%d",&x);
    printf("d:%d\n",x);

    printf("Y:");
    scanf("%f",&y);
    printf("f:%f\n",y);

    printf("Z:");
    scanf("%lf",&z);
    printf("lf:%lf\n",z);

    printf("String:");
    scanf("%s",string);
    printf("String:%s\n",string);

    return 0;

}
