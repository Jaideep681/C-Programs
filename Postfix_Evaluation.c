#include <stdio.h>
#include <ctype.h>
#define max 50
int stack[max],top=-1;
void push(int data){
    stack[++top]=data;
}
int pop(){
    return stack[top--];
}
int evaluate(char exp[]){
    for(int i=0;exp[i]!='\0';i++){
        char ch=exp[i];
        if(isdigit(ch)){
            push(ch-'0');
        }
        else{
            int b=pop();
            int a=pop();
            switch(ch){
                case '+':
                    push(a+b);
                    break;
                case '-':
                    push(a-b);
                    break;
                case '*':
                    push(a*b);
                    break;
                case '/':
                    push(a/b);
                    break;
            }
        }
    }
    return pop();
}
int main(){
    char exp[50];
    printf("Enter Postfix Expression: ");
    gets(exp);
    printf("Postfix Evaluated answer is %d\n",evaluate(exp));
    return 0;
}