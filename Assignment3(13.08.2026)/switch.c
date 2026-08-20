/* 
consider a book rack,where books are placed in stack.Each book has acc_no
(1,2,3,4........)if you one asked to place book in stack using acc_no
have you performe these operation on stack of books.the sequence of operation
push(1),push(2),push(3),push(4),pop(3),push(5),pop(5) display the final position of books
*/

#include <stdio.h>

#define MAX 10

int main()
{
    int stack[MAX];
    int top = -1;
    int choice, acc_no;

    while (1)
    {
        printf("\n--- BOOK STACK MENU ---\n");
        printf("1. Push Book\n");
        printf("2. Pop Book\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (top == MAX - 1)
                {
                    printf("Stack Overflow!\n");
                }
                else
                {
                    printf("Enter Accession Number: ");
                    scanf("%d", &acc_no);

                    top++;
                    stack[top] = acc_no;

                    printf("Book %d pushed successfully.\n", acc_no);
                }
                break;

            case 2:
                if (top == -1)
                {
                    printf("Stack Underflow!\n");
                }
                else
                {
                    printf("Book %d popped successfully.\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top == -1)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("\nStack elements are:\n");

                    for (int i = top; i >= 0; i--)
                    {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 4:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}