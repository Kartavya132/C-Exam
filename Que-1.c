#include <stdio.h>

int main(void)
{
    // Declaring the variable
    int marks[5];
    int i;
    int sum = 0;
    float average;
    char grade;

    // Taking input from user of marks
    printf("Enter marks for 5 subjects (0-100):\n");
    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        if (scanf("%d", &marks[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Marks must be between 0 and 100.\n");
            return 1;
        }
        // Increasing the sum by marks
        sum += marks[i];
    }

    // Calculating average
    average = sum / 5.0f;

    // Finding the Grade
    if (average >= 90.0f)
    {
        grade = 'A';
    }
    else if (average >= 80.0f)
    {
        grade = 'B';
    }
    else if (average >= 70.0f)
    {
        grade = 'C';
    }
    else if (average >= 60.0f)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("\nAverage: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
