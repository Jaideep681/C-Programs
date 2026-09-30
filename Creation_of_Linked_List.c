#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL, *new = NULL, *temp = NULL;
    int data, choice = 1;
    while (choice)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = head;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        printf("Do you want to add another node(0. No/1. Yes): ");
        scanf("%d", &choice);
    }
    printf("Linked List elements:-\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}