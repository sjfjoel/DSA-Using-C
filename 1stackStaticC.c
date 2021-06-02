// Stack implementation using static memory
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5 // pre-proccessor macro // sets the CAPACITY as 5 before compilation

// function prototypes
void push(int);
int isFull(void);
int pop(void);
int isEmpty(void);
void peek(void);
void traverse(void);

// global variables
int stack[CAPACITY], top = -1;

// main function
void main()
{   
    int choice, element;
    printf("Stack implementation using static memory\n\n");
    
    while (1)
    {
        printf("Operation choices\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Quit\n\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1 :    printf("Enter the element to be pushed : ");
                        scanf("%d",&element);
                        push(element);
                        break;
            case 2 :    element = pop();
                        printf("%d is poped up\n", element);
                        break;
            case 3 :    peek();
                        break;
            case 4 :    traverse();
                        break;
            case 5 :    exit(0);

            default : printf("Enter valid choice...\n");
        }        
    }
}

// insert an element in to the stack - function
void push(int element)
{
    if(isFull())
    {
        printf("Stack is overflow...\n");
    }
    else
    {
        top++;
        stack[top] = element;
        printf("Entered element is pushed with stack...\n");
    }
}
// Check the stack whether it is full - function
int isFull()
{
    if(top == CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Delete an element from the stack - function
int pop()
{
    if(isEmpty())
    {
        printf("Stack is underflow...\n");
    }
    else
    {
        return stack[top--];
    }
}

// Check the stack whether it is empty - function
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Display the item on the top of stack - function
void peek()
{
    if(isEmpty())
    {
        printf("No elements in the stack to display");
    }
    else
    {
        printf("Element %d is peeked\n", stack[top]);
    }
}

// Display all the elements in the stack - function
void traverse()
{
    if(isEmpty())
    {
        printf("No elements to display\n");
    }
    else
    {
        int i;
        printf("Stack elements are :\n");
        for ( i = 0; i <= top; i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}