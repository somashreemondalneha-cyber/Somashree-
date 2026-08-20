/*Bank account is keeping thr transction amount as it is processed by customer. The transction amount of last customer 
is sorted at top position. After completion of all transction, the manager pull the amount one by one and display the
amount and find total transction amount to print .
PUSH() : To insert amount in,
POP() : To remove amount.
dosum(): Find sum of all transaction amount.
Amount inserted in following: 1050,2090,3000,6000,5500,8900*/
#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

/* PUSH function */
void push(int amount)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = amount;
        printf("%d inserted into stack.\n", amount);
    }
}

/* POP function */
int pop()
{
    int amount;

    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        amount = stack[top];
        top--;
        return amount;
    }
}

/* DOSUM function */
int dosum()
{
    int i, sum = 0;

    for (i = 0; i <= top; i++)
    {
        sum = sum + stack[i];
    }

    return sum;
}

int main()
{
    int choice, amount, sum;

    do
    {
        printf("\n----- BANK TRANSACTION MENU -----\n");
        printf("1. PUSH Transaction Amount\n");
        printf("2. POP Transaction Amount\n");
        printf("3. Display Total Transaction Amount\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter transaction amount: ");
                scanf("%d", &amount);
                push(amount);
                break;

            case 2:
                amount = pop();

                if (amount != -1)
                {
                    printf("Transaction amount removed: %d\n", amount);
                }
                break;

            case 3:
                sum = dosum();
                printf("Total Transaction Amount = %d\n", sum);
                break;

            case 4:
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}










    