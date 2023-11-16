#include "lists.h"

/**
 * add_node_end - Adding a new node to the end of list_t
 * @head: head of linked list
 * @str: string
 * Return: NULL or new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnod;
	list_t *tempva;
	unsigned int k;
	unsigned int sum = 0;

	newnod = malloc(sizeof(list_t));
	if (newnod == NULL)
		return (NULL);
	newnod->str = strdup(str);
	for (k = 0 ; str[k] != '\0' ; k++)
		sum++;
	newnod->len = sum;
	newnod->next = NULL;
	tempva = *head;

	if (tempva == NULL)
		*head = newnod;
	else
	{
		while (tempva->next != NULL)
			tempva = tempva->next;
		tempva->next = newnod;
	}
	return (*head);
}
