/*A single screen cinema hall has one ticket counter. One customer arrives at a time. Simulate the ticket 
counter using queue,
*Add customers.
*Serve customers.
*Show"Housefull" if the seats are full.
*Display.
CustomerID:100,115,095,086 */


#include <stdio.h>
#define MAX 4

int queue[MAX];
int front = -1, rear = -1;

void addCustomer()
{
    int id;

    if (rear == MAX - 1)
    {
        printf("Housefull! No more customers can be added.\n");
    }
    else
    {
        printf("Enter Customer ID: ");
        scanf("%d", &id);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = id;

        printf("Customer %d added successfully.\n", id);
    }
}

void serveCustomer()
{
    if (front == -1 || front > rear)
    {
        printf("No customer in queue.\n");
    }
    else
    {
        printf("Customer %d is served.\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Customers in queue: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n----- CINEMA TICKET COUNTER -----\n");
        printf("1. Add Customer\n");
        printf("2. Serve Customer\n");
        printf("3. Display Customers\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addCustomer();
                break;

            case 2:
                serveCustomer();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}


