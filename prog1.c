#include <stdio.h>

void sum(int a, int b)
{
    printf("\nAddition of %d and %d is %d", a, b, a + b);
}

void sub(int a, int b)
{
    printf("\nSubtraction of %d and %d is %d", a, b, a - b);
}

void mul(int a, int b)
{
    printf("\nMultiplication of %d and %d is %d", a, b, a * b);
}

void div(int a, int b)
{
    printf("\nDivision of %d and %d is %d", a, b, a / b);
}

void reminder(int a, int b)
{
    printf("\nReminder of %d and %d is %d", a, b, a % b);
}

int main()
{
    int a, b, choice;

    do
    {
        printf("\n\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice != 0 && choice <= 5)
        {
            printf("Enter the first number: ");
            scanf("%d", &a);

            printf("Enter the second number: ");
            scanf("%d", &b);
        }

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            reminder(a, b);
            break;
        case 0:
            break;
        default:
            printf("Wrong Choice...");
        }

    } while (choice != 0);

    return 0;
}