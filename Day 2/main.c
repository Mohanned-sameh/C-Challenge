#include "todo.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	todo_t *head = NULL;
	int choice, id;
	char title[100];
	char description[100];

	do
	{
		printf("1. Add todo\n");
		printf("2. Delete todo\n");
		printf("3. Print todo\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter title: ");
			getchar();
			fgets(title, sizeof(title), stdin);
			title[strcspn(title, "\n")] = '\0';
			printf("Enter description: ");
			fgets(description, sizeof(description), stdin);
			description[strcspn(description, "\n")] = '\0';
			addTodo(&head, title, description);
			break;
		case 2:
			printf("Enter id: ");
			scanf("%d", &id);
			deleteTodo(&head, id);
			break;
		case 3:
			printTodo(head);
			break;
		case 4:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice\n");
		}
	} while (choice != 4);

	freeTodo(head);
	return 0;
}
