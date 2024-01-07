#ifndef TODO_H
#define TODO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct Todolist
{
	int id;
	char *title;
	char *description;
	struct Todolist *next;
	struct Todolist *prev;
} todo_t;

todo_t *addTodo(todo_t **head, char *title, char *description);
void printTodo(todo_t *head);
void deleteTodo(todo_t **head, int id);
void freeTodo(todo_t *head);
int countTodo(todo_t *head);

#endif
