#include "hash_tables.h"

/**
 * hash_table_delete - Deleting a hash table
 * @ht: pointer
 * Return: it is void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *topnd = ht;
	hash_node_t *currentnd;
	hash_node_t *tempnd;
	unsigned long int k;

	for (k = 0 ; k < ht->size ; k++)
	{
		if (ht->array[k] != NULL)
		{
			currentnd = ht->array[k];
			while (currentnd != NULL)
			{
				tempnd = currentnd->next;
				free(currentnd->key);
				free(currentnd->value);
				free(currentnd);
				currentnd = tempnd;
			}
		}
	}
	free(topnd->array);
	free(topnd);
}
