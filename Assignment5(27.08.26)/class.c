#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int n;
    struct st *next;
} link;

link *HEAD = NULL;

void Create(int data)
{
    link *ptr = NULL;
    link *temp = NULL;

    ptr = (link *)malloc(sizeof(link));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    ptr->n = data;
    ptr->next = NULL;

    if (HEAD == NULL)
    {
        HEAD = ptr;
    }
    else
    {
        temp = HEAD;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = ptr;
    }
}

void Display()
{
    link *temp = HEAD;

    if (HEAD == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->n);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    Create(10);
    Create(20);
    Create(30);

    Display();

    return 0;
}