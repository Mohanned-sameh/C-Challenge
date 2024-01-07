#include "todo.h"
/**
 * printTodo - prints the linked list
 * @head: the head of the linked list
 */
void printTodo(todo_t *head)
{
	todo_t *current = head;

	while (current != NULL)
	{
		printf("ID: %d\n", current->id);
		printf("Title: %s\n", current->title);
		printf("Description: %s\n", current->description);
		current = current->next;
	}
	printf("Total number of todos: %d\n", countTodo(head));
}
