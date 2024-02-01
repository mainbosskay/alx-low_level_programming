#include "hash_tables.h"

/**
 * hash_table_set - Adding an element in a hash table
 * @ht: pointer
 * @key: key to add
 * @value: value associated with key
 * Return: 1 if it succeeded or 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnd;
	char *copyval;
	unsigned long int indx, k;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copyval = strdup(value);
	if (copyval == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	for (k = indx ; ht->array[k] ; k++)
	{
		if (strcmp(ht->array[k]->key, key) == 0)
		{
			free(ht->array[k]->value);
			ht->array[k]->value = copyval;
			return (1);
		}
	}
	newnd = malloc(sizeof(hash_node_t));
	if (newnd == NULL)
	{
		free(copyval);
		return (0);
	}
	newnd->key = strdup(key);
	if (newnd->key == NULL)
	{
		free(newnd);
		return (0);
	}
	newnd->value = copyval;
	newnd->next = ht->array[indx];
	ht->array[indx] = newnd;
	return (1);
}
