#include<stdio.h>
main()
{
    int i,j,k,a[2][3][2];
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<2;k++)
        {
            scanf("%d",&a[i][j][k]);
        }
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<2;k++)
        {
printf("%d ",a[i][j][k]);

}
printf("\n");
    }
    printf("\n");
}
}

