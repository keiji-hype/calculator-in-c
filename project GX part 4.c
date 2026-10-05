// project GX part 4.cpp
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int factorial(int num); // Function prototype
// Function to calculate factorial
int factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}


int main(void)
{
    float first_number, second_number;
    int choose;
    char operator_symbol;

    printf("=================\n""MAGIC CALCULATOR\n""=================\n");
    printf("\nHere are some guideline for you on how to use this ""MAGIC CALCULATOR:\n\n");
    printf("1. Press '+' for addition\n");
    printf("2. Press '-' for subtraction\n");
    printf("3. Press '/' for division\n");
    printf("4. Press '*' for multiplication\n");
    printf("5. Press '!' for factorial calculation\n");
    printf("6. Press 'l' for logarithm (base 10)\n");
    printf("7. Press '^' for power calculation\n");
    printf("8. Press 'n' for natural logarithm (ln)\n\n");
    printf("Press '1' to continue or '2' to exit: ");
    scanf("%d", &choose);

    while (choose == 1)
    {
        system("clear");
        printf("Enter operator (+, -, *, /, !, ^, l for log, n for ln): ");
        scanf(" %c", &operator_symbol);

        switch (operator_symbol)
        {
            case '+':
                printf("Enter first number: ");
                scanf("%f", &first_number);
                printf("Enter second number: ");
                scanf("%f", &second_number);
                printf("-------------------------\n");
                printf("Result: %.2f + %.2f = %.2f\n", first_number, second_number, first_number + second_number);
                printf("-------------------------\n");
                break;

            case '-':
                printf("Enter first number: ");
                scanf("%f", &first_number);
                printf("Enter second number: ");
                scanf("%f", &second_number);
                printf("-------------------------\n");
                printf("Result: %.2f - %.2f = %.2f\n", first_number, second_number, first_number - second_number);
                printf("-------------------------\n");
                break;

            case '*':
                printf("Enter first number: ");
                scanf("%f", &first_number);
                printf("Enter second number: ");
                scanf("%f", &second_number);
                printf("-------------------------\n");
                printf("Result: %.2f * %.2f = %.2f\n", first_number, second_number, first_number * second_number);
                printf("-------------------------\n");
                break;

            case '/':
                printf("Enter first number: ");
                scanf("%f", &first_number);
                printf("Enter second number: ");
                scanf("%f", &second_number);
                if (second_number == 0)
                    printf("Error! Division by zero is not allowed.\n");
                else
                    printf("-------------------------\nResult: %.2f / %.2f = %.2f\n-------------------------\n", first_number, second_number, first_number / second_number);
                break;

            case '!':
                printf("Enter an integer: ");
                int num;
                scanf("%d", &num);
                if (num < 0)
                    printf("Error! Factorial of a negative number is undefined.\n");
                else
                    printf("Factorial of %d is %d\n", num, factorial(num));
                break;

            case '^':
                printf("Enter base number: ");
                scanf("%f", &first_number);
                printf("Enter exponent: ");
                scanf("%f", &second_number);
                printf("-------------------------\n");
                printf("Result: %.2f ^ %.2f = %.2f\n", first_number, second_number, pow(first_number, second_number));
                printf("-------------------------\n");
                break;

            case 'l':
                printf("Enter a number for log (base 10): ");
                scanf("%f", &first_number);
                if (first_number <= 0)
                    printf("Error! Logarithm is undefined for non-positive numbers.\n");
                else
                    printf("Log10(%.2f) = %.2f\n", first_number, log10(first_number));
                break;

            case 'n':
                printf("Enter a number for natural logarithm (ln): ");
                scanf("%f", &first_number);
                if (first_number <= 0)
                    printf("Error! Natural logarithm is undefined for non-positive numbers.\n");
                else
                    printf("ln(%.2f) = %.2f\n", first_number, log(first_number));
                break;

            default:
                printf("Invalid operator! Please enter a valid one.\n");
        }

        // Ask if user wants to continue
        printf("\nDo you want to continue?\nPress 1 to continue or 2 to exit: ");
        scanf("%d", &choose);
    }

    printf("\nThank you for using MAGIC CALCULATOR!\n");
    return 0;
}

