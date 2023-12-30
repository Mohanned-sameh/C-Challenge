#include "main.h"
/**
 * calc - simple calculator
 */
void calc(void)
{
    int num1 = 0, num2 = 0;
    char op;

    printf("Enter a number: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input for first number!\n");
        return;
    }
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {
        printf("Invalid input for operator!\n");
        return;
    }
    printf("Enter another number: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid input for second number!\n");
        return;
    }
    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
            return;
        }
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
            return;
        }
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        break;
    default:
        printf("Invalid operator entered!\n");
    }
}
