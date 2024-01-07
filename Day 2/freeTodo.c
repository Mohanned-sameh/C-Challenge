#include "todo.h"
/**
 * freeTodo - Frees the todo list
 * @head: The head of the todo list
 */
void freeTodo(todo_t *head)
{
	todo_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->title);
		free(temp->description);
		free(temp);
	}
}
