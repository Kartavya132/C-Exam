#include <stdio.h>

#define MAX 100

/* Compute average of all values in a 2D array */
float average2D(int rows, int cols, int arr[MAX][MAX])
{
    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }

    return (float)sum / (rows * cols);
}

int main()
{
    // Declaring variables
    int rows, cols;
    int matrix[MAX][MAX];
    float avg;

    // Taking the input of rows
    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > MAX)
    {
        printf("Invalid row count.\n");
        return 1;
    }

    // Taking the input of columns
    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > MAX)
    {
        printf("Invalid column count.\n");
        return 1;
    }

    printf("\nEnter %d elements for a %dx%d array:\n", rows * cols, rows, cols);

    // Taking input of elemnets in the arrays
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);

            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Calling the functions
    avg = average2D(rows, cols, matrix);

    printf("Average of all elements = %.2f\n", avg);

    return 0;
}
