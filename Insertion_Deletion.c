#include <stdio.h>
#define MAX 10
int main()
{
    int choice;
    printf("Enter your choice:-\n1. Insertion Program       2. Deletion Program: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        {
            printf("This is an Insertion Program:-\n");
            int a[MAX] = {1, 2, 3, 5, 6, 7}, size = 6, i, item, pos;
            printf("Enter item to insert: ");
            scanf("%d", &item);
            printf("Enter a index position to insert data: ");
            scanf("%d", &pos);
            for (i = size; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos] = item;
            size++;
            for (i = 0; i < size; i++)
            {
                printf("A[%d]: %d\n", i, a[i]);
            }
            break;
        }
        case 2:
        {
            printf("This is a Deletion Program:-\n");
            int a[MAX] = {1, 2, 0, 3, 4, 5}, size = 6, i, pos;
            printf("Enter a index position to delete: ");
            scanf("%d", &pos);
            for (i = pos; i < size; i++)
            {
                a[i - 1] = a[i];
            }
            size--;
            for (i = 0; i < size; i++)
            {
                printf("A[%d]: %d\n", i, a[i]);
            }
            break;
        }   
        default:
        {
            printf("Invalid Choice, please try again...\n");
            break;
        }
    }
    return 0;
}