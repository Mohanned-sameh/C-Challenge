#include "todo.h"
/**
 * addTodo - adds a new todo item to the list
 * @head: pointer to the head of the list
 * @title: title of the todo item
 * @description: description of the todo item
 * Return: pointer to the new todo item, or NULL if malloc fails
 */
todo_t *addTodo(todo_t **head, char *title, char *description)
{
	todo_t *newTodo = malloc(sizeof(todo_t));
	todo_t *current;

	if (newTodo == NULL)
	{
		printf("Error: malloc failed\n");
		return (NULL);
	}
	newTodo->id = countTodo(*head) + 1;
	newTodo->title = malloc(strlen(title) + 1);
	if (newTodo->title == NULL)
	{
		printf("Error: malloc failed\n");
		free(newTodo);
		return (NULL);
	}
	strcpy(newTodo->title, title);

	newTodo->description = malloc(strlen(description) + 1);
	if (newTodo->description == NULL)
	{
		printf("Error: malloc failed\n");
		free(newTodo->title);
		free(newTodo);
		return (NULL);
	}
	strcpy(newTodo->description, description);
	newTodo->next = NULL;
	if (*head == NULL)
	{
		*head = newTodo;
		return (newTodo);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newTodo;
	return (newTodo);
}
