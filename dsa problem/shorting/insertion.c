// insertion .................
#include <stdio.h>
int main()
{
    int i, j, a[20], n, temp;
    printf("enter the number os elements :");
    scanf("%d", &n);
    printf("enter the element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        
        while (j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[1+j]=temp;
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}