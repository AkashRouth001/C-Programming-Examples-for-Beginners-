// bubble
#include <stdio.h>
int main()
{
    int n, temp, i, j, flag;
    printf("enter the number of element :\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
            }
        }
       
    }
    printf("after the shorting :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d ",a[i]);
    }
}