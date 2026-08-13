/*
WAP in c to take  input marks of a array of ten student randomly in an array sort 
the array using merge sort and show the highest and lowest marks.
*/





#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int k = 0;
    int temp[10];

    while(i <= mid && j <= end)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = start, k = 0; i <= end; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void merge_sort(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int marks[10];
    int i;

    printf("Enter marks of 10 students:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }

    merge_sort(marks, 0, 9);

    printf("\nMarks after Merge Sort:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\nLowest marks = %d", marks[0]);
    printf("\nHighest marks = %d", marks[9]);

    return 0;
}
