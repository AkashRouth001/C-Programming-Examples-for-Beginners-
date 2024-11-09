#include<stdio.h>
int main()
{
    int n,j,i;
    float x[20],y[20],a,p,sum=0.0;
    printf("enter the number of element to be shorted :");
    scanf("%d",&n);
    printf("enter the value of x :\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
    }

    for(j=0;j<n;j++)
    {
        printf("y[%d]=",j);
        scanf("%f",&y[j]);
    }

    printf("entrr the interpolition point :");
    scanf("%f",&a);

    for(i = 0;i<n;i++)
    {
        p =1;
        for(j=0;j<n;j++)
        {
            if(i!= j)
            {
                p = p*(a-x[j])/(x[i]-x[j]);
            }
        }
        sum = sum + p*y[i];
    }
    printf("sum = %f ",sum);
}