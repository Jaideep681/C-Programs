#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp = NULL, *new = NULL;
struct node *createNode(int data)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}
void insertatbeginning(int data)
{
    new = createNode(data);
    new->next = head;
    head = new;
}
void insertatending(int data)
{
    new = createNode(data);
    if (head == NULL)
    {
        head = new;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
}
void insertatlocation(int data,int pos)
{
    new = createNode(data);
    if(pos==1){
        new->next=head;
        head=new;
    }
    temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Position out of range!\n");
    }
    else{
        new->next=temp->next;
        temp->next=new;
    }
}
void display()
{
    temp = head;
    if (temp == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List elements:-\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    int data, choice,pos;
    do
    {
        printf("Enter your choice:-\n1. Insertion at beginning\n2. Insertion at ending\n3. Insertion at specific location\n4. Display\n0. Exit: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d",&data);
            insertatbeginning(data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d",&data);
            insertatending(data);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d",&data);
            printf("Enter position to insert data: ");
            scanf("%d",&pos);
            insertatlocation(data,pos);
            break;
        case 4:
            display();
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