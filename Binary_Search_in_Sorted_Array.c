//Binary Search in 1-D Sorted Array
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, item, beg = 0, end = n - 1, mid, found = 0;
    printf("Enter the element for find: ");
    scanf("%d", &item);
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == item)
        {
            printf("Item %d is found in the index %d.\n", item, mid);
            found = 1;
            break;
        }
        else if (a[mid] < item)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        printf("Item %d is not found in this array.\n", item);
    }
    return 0;
}