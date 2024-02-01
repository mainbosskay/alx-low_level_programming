#include "hash_tables.h"

/**
 * hash_table_create - Creating a hash table
 * @size: size of the array
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nht;
	unsigned long int k;

	nht = malloc(sizeof(hash_table_t));
	if (nht == NULL)
		return (NULL);
	nht->size = size;
	nht->array = malloc(sizeof(hash_node_t *) * size);
	if (nht->array == NULL)
		return (NULL);
	for (k = 0 ; k < size ; k++)
		nht->array[k] = NULL;
	return (nht);
}
