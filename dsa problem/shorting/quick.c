#include <stdio.h>


int partition(int low, int high, int a[20])
{
    int povid = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    while (i < j)
    {
        while (a[i] <= povid)
        {
            i++;
        }
        while (a[j] > povid)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickshort(int low, int high, int a[])
{
    int index;
    if (low < high)
    {

        index = partition(a, low, high);
        quickshort(a, low, index - 1);
        quickshort(a, index + 1, high);
    }
}

int main()
{
    int a[20], n, i, j, k;
    printf("enter the size of array : ");
    scanf("%d", &n);
    printf("enter the elements:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    printf("after the shorting:\n");
    quickSort(a, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    return 0;
}