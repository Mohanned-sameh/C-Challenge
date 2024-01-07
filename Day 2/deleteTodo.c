#include "todo.h"
/**
 * deleteTodo - deletes a todo from the list
 * @head: pointer to the head of the list
 * @id: id of the todo to delete
 */
void deleteTodo(todo_t **head, int id)
{
	todo_t *current = *head;
	todo_t *previous = NULL;

	while (current != NULL)
	{
		if (current->id == id)
		{
			if (previous == NULL)
			{
				*head = current->next;
				free(current);
				return;
			}
			previous->next = current->next;
			free(current);
			return;
		}
		previous = current;
		current = current->next;
		if (current == NULL)
			printf("Todo with id %d not found\n", id);
	}
}
