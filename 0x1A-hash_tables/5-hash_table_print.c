#include "hash_tables.h"

/**
 * hash_table_print - Printing the content of a hash table
 * @ht: pointer
 * Return: it is void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *currentnd;
	unsigned char sym;
	unsigned long int k;

	sym = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (k = 0 ; k < ht->size ; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (sym == 1)
				printf(", ");
			currentnd = ht->array[k];
			while (currentnd != NULL)
			{
				printf("'%s': '%s'", currentnd->key, currentnd->value);
				currentnd = currentnd->next;
				if (currentnd != NULL)
					printf(", ");
			}
			sym = 1;
		}
	}
	printf("}\n");
}
