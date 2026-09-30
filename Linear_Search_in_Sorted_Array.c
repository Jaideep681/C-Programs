#include <stdio.h>
#define MAX 10
int main()
{
    int arr[MAX] = {5, 12, 7, 20, 15, 30, 25, 40, 50, 60};
    int item, i, found = 0;

    // Input the element to search
    printf("Enter element to search: ");
    scanf("%d", &item);

    // Linear search
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] == item)
        {
            printf("Element %d found at position %d (index %d)\n", item, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", item);
    }

    return 0;
}