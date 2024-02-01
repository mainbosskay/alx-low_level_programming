#include "hash_tables.h"

/**
 * hash_table_get - Retriving the value associated with a key
 * @ht: pointer
 * @key: key to be retrived
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currentnd;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);
	currentnd = ht->array[indx];
	while (currentnd && strcmp(currentnd->key, key) != 0)
		currentnd = currentnd->next;
	return ((currentnd == NULL) ? NULL : currentnd->value);
}
