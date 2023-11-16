#include "lists.h"

/**
 * add_node - Adding a new node to the beginning of list_t
 * @head: head of linked list
 * @str: string to the list
 * Return: NULL or new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnod;
	unsigned int k;
	unsigned int sum = 0;

	newnod = malloc(sizeof(list_t));
	if (newnod == NULL)
		return (NULL);
	newnod->str = strdup(str);
	for (k = 0 ; str[k] ; k++)
		sum++;
	newnod->len = sum;
	newnod->next = *head;
	*head = newnod;
	return (*head);
}
