#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserting a new node at a given position
 * @h: double pointer of the linked list
 * @idx: index to insert the new node
 * @n: value to be added to the new node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *hdnode;
	unsigned int k;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		hdnode = *h;
		k = 1;
		if (hdnode)
			while (hdnode->prev)
				hdnode = hdnode->prev;
		while (hdnode)
		{
			if (k == idx)
			{
				if (!hdnode->next)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode)
					{
						newnode->n = n;
						newnode->next = hdnode->next;
						newnode->prev = hdnode;
						hdnode->next->prev = newnode;
						hdnode->next = newnode;
					}
				}
				break;
			}
			hdnode = hdnode->next;
			k++;
		}
	}
	return (newnode);
}
