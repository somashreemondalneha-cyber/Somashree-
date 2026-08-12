/*
A class teacher list of marks in random order all the marks are whole number before publishing the result the class teacher 
wants to arrange the marks in an order so that the rank of the student can easily be dected.use a method to order the marks
 in assending order,which methodology you used here implement the method using c program

 sample input:[99,85,58,71,46,80,78,65,49,55]
 case 1:
*/

#include <stdio.h>

int main()
{
    int marks[] = {99, 85, 58, 71, 46, 80, 78, 65, 49, 55};
    int n = 10;
    int i, j, temp;

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("Marks in ascending order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}   