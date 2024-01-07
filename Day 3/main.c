#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	float celsius, fahrenheit;
	int choice;

	do
	{
		printf("1. Convert Celsius to Fahrenheit\n");
		printf("2. Convert Fahrenheit to Celsius\n");
		printf("3. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter temperature in Celsius: ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 9 / 5) + 32;
			printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
			break;
		case 2:
			printf("Enter temperature in Fahrenheit: ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5 / 9;
			printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
			break;
		case 3:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice\n");
			break;
		}
		printf("\n");
	} while (choice != 3);
}
