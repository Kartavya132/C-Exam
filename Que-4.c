#include <stdio.h>

// Function for printing even no. with pointer
void printEvenElements(int *arr, int n)
{
    printf("Even elements: ");
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("%d, ", *(arr + i));
        }
    }
    printf("\n");
}

int main(void)
{
    int n;

    // Taking input for no. of elements
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Taking input of arrays
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Calling function
    printEvenElements(arr, n);
    return 0;
}
