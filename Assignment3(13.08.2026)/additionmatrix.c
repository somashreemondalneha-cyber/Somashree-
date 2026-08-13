/*Addition for 2D Matrix*/


#include <stdio.h>

void input(int arr[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void add(int arr1[10][10], int arr2[10][10], int result[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void display(int arr[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr1[10][10], arr2[10][10], result[10][10];
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of first matrix:\n");
    input(arr1, r, c);

    printf("Enter elements of second matrix:\n");
    input(arr2, r, c);

    add(arr1, arr2, result, r, c);

    printf("\nFirst Matrix:\n");
    display(arr1, r, c);

    printf("\nSecond Matrix:\n");
    display(arr2, r, c);

    printf("\nAddition of two matrices:\n");
    display(result, r, c);

    return 0;
}