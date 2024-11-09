// trapi 0.5~0|x/cosx dx
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i;
    float b ,a,h,s= 0,temp;
    printf("enter the no of interval  :");
    scanf("%d",&n);
    printf("enter the upper lavel :");
    scanf("%f",&b);
    printf("enter the lower lavel :");
    scanf("%f",&a);

    h = (b-a)/n;
    float x[n],y[n];
    for(i=0;i<=n;i++)
    {
        x[i]=a+i*h;
        y[i] = x[i]/cos(x[i]);
    }

    for(i =1;i<n;i++)
    {
        temp = y[i]+temp;
    }
    s =h/2*(y[0]+y[n]+2*temp);
    printf("sum = %f\n",s);
}