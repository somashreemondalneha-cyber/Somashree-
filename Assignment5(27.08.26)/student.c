#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int studentId;
    struct Student *next;
};

struct Student *HEAD = NULL;

void addStudent(int id)
{
    struct Student *newStudent;
    struct Student *temp;

    newStudent = (struct Student *)malloc(sizeof(struct Student));

    newStudent->studentId = id;
    newStudent->next = NULL;

    if (HEAD == NULL)
    {
        HEAD = newStudent;
    }
    else
    {
        temp = HEAD;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newStudent;
    }
}

void displayStudents()
{
    struct Student *temp;

    temp = HEAD;

    if (HEAD == NULL)
    {
        printf("No students registered.\n");
        return;
    }

    printf("\nRegistered Students:\n");

    while (temp != NULL)
    {
        printf("Student ID: %d\n", temp->studentId);
        temp = temp->next;
    }
}

int main()
{
    int n, id;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Student ID %d: ", i);
        scanf("%d", &id);

        addStudent(id);
    }

    displayStudents();

    return 0;
}