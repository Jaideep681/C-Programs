//Program of simple "QUEUE".
#include <stdio.h>
#define max 5
int queue[max], rear = -1, front = -1;
int isfull()
{
    return rear == max - 1;
}
int isempty()
{
    return front == -1 || front > rear;
}
void enqueue(int data)
{
    if (isfull())
    {
        printf("Queue overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = data;
}
int dequeue()
{
    if (isempty())
    {
        printf("Queue underflow!\n");
        return -1;
    }
    return queue[front++];
}
void display()
{
    if (isempty())
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements:-\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    printf("Dequeued element: %d\n", dequeue());
    display();
    return 0;
}