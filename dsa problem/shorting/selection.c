// quick.....
#include <stdio.h>
int main()
{
    int i, j, temp, a[20],min, n;
    printf("enter the number of eelments :");
    scanf("%d",&n);
    printf("enter the number :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
         min = i;
            for (j = i + 1; j < n; j++)
            {
                if (a[j] < a[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
    }
   printf("after shorting:\n");
   for ( i = 0; i < n; i++)
   {
     printf("%d ",a[i]);
   }
   
}
