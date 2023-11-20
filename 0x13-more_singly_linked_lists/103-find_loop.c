#include "lists.h"

/**
 * find_listint_loop - Finding the loop in a linked list
 * @head: pointer to the head of the list
 * Return: either NULL or address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tardy = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	while (tardy && fast && fast->next)
	{
		fast = fast->next->next;
		tardy = tardy->next;
		if (fast == tardy)
		{
			tardy = head;
			while (tardy != fast)
			{
				tardy = tardy->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
