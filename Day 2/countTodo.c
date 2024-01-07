#include "todo.h"
/**
 * countTodo - counts the number of todos in the linked list
 * @head: the head of the linked list
 * Return: the number of todos in the linked list
 */
int countTodo(todo_t *head)
{
	int count = 0;
	todo_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}