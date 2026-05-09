#include <stdio.h>

// Function for printing odd no. in the array
void printOddElements(int arr[], int n)
{
    printf("Odd elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main(void)
{
    int n;

    // Taking no. of elements
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // Taking the elements in the arrays
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
    printOddElements(arr, n);
    return 0;
}
