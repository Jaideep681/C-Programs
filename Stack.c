//Program of simple "STACK".
#include <stdio.h>
#define max 5
int stack[max], top = -1;
int isfull()
{
    return top == max - 1;
}
int isempty()
{
    return top == -1;
}
void push(int data)
{
    if (isfull())
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = data;
}
int pop()
{
    if (isempty())
    {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}
void display()
{
    if (isempty())
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements:-\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped element: %d\n", pop());
    display();
    return 0;
}