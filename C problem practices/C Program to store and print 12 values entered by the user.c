#include<stdio.h>
int main()
{
    int _3d[2][3][2];
    int i,j,k;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&_3d[i][j][k]);
            }
        }
    }

    printf("\ndisplaying :\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d ",_3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
