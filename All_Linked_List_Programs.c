#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
// 1️⃣ Create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// 2️⃣ Insert at beginning
void insertBeginning(int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}
// 3️⃣ Insert at end
void insertEnd(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
// 4️⃣ Insert at a specific position
void insertAtPosition(int data, int pos)
{
    struct Node *newNode = createNode(data);
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
        printf("Position out of range!\n");
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
// 5️⃣ Display or "Processing"
void display()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// Count nodes
int countNodes()
{
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// Sum of all nodes
int sumNodes()
{
    int sum = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}
// 6️⃣ Search element (normal)
void search(int key)
{
    struct Node *temp = head;
    int pos = 1;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in list.\n", key);
}
// 7️⃣ Search element in a sorted linked list
void searchInSorted(int key)
{
    struct Node *temp = head;
    int pos = 1;
    while (temp != NULL && temp->data <= key)
    {
        if (temp->data == key)
        {
            printf("Element %d found at position %d (sorted search)\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in sorted list.\n", key);
}
// 8️⃣ Delete from beginning
void deleteBeginning()
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct Node *temp = head;
    head = head->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}
// 9️⃣ Delete from end
void deleteEnd()
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    if (head->next == NULL)
    {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    struct Node *prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    printf("Deleted: %d\n", temp->data);
    prev->next = NULL;
    free(temp);
}
// 🔟 Delete from a specific position
void deleteAtPosition(int pos)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    if (pos == 1)
    {
        struct Node *temp = head;
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }
    struct Node *temp = head;
    struct Node *prev = NULL;
    for (int i = 1; i < pos && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position out of range!\n");
        return;
    }
    printf("Deleted: %d\n", temp->data);
    prev->next = temp->next;
    free(temp);
}
// Menu-driven program
int main()
{
    int choice, data, pos, key;
    do
    {
        printf("\n=== LINKED LIST MENU ===\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("6. Search in Sorted List\n");
        printf("7. Count & Sum of Nodes\n");
        printf("8. Delete at Beginning\n");
        printf("9. Delete at End\n");
        printf("10. Delete at Position\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insertBeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            insertEnd(data);
            break;
        case 3:
            printf("Enter data and position: ");
            scanf("%d %d", &data, &pos);
            insertAtPosition(data, pos);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Enter element to search: ");
            scanf("%d", &key);
            search(key);
            break;
        case 6:
            printf("Enter element to search in sorted list: ");
            scanf("%d", &key);
            searchInSorted(key);
            break;
        case 7:
            printf("Total Nodes: %d\n", countNodes());
            printf("Sum of all nodes: %d\n", sumNodes());
            break;
        case 8:
            deleteBeginning();
            break;
        case 9:
            deleteEnd();
            break;
        case 10:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            deleteAtPosition(pos);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}