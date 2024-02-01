#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creating a sorted hash table
 * @size: size of the sorted hash table
 * Return: pointer to the created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shasht;
	unsigned long int k;

	shasht = malloc(sizeof(shash_table_t));
	if (shasht == NULL)
		return (NULL);
	shasht->size = size;
	shasht->array = malloc(sizeof(shash_node_t *) * size);
	if (shasht->array == NULL)
		return (NULL);
	for (k = 0 ; k < size ; k++)
		shasht->array[k] = NULL;
	shasht->shead = NULL;
	shasht->stail = NULL;
	return (shasht);
}

/**
 * shash_table_set -Adding elements to the sorted hash table
 * @ht: pointer
 * @key: key to add
 * @value: value associated with the key
 * Return: 1 if successful or 0 if not
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnd, *tempnd;
	char *copyval;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copyval = strdup(value);
	if (copyval == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	tempnd = ht->shead;
	while (tempnd)
	{
		if (strcmp(tempnd->key, key) == 0)
		{
			free(tempnd->value);
			tempnd->value = copyval;
			return (1);
		}
		tempnd = tempnd->snext;
	}
	newnd = malloc(sizeof(shash_node_t));
	if (newnd == NULL)
	{
		free(copyval);
		return (0);
	}
	newnd->key = strdup(key);
	if (newnd->key == NULL)
	{
		free(copyval);
		free(newnd);
		return (0);
	}
	newnd->value = copyval;
	newnd->next = ht->array[indx];
	ht->array[indx] = newnd;
	if (ht->shead == NULL)
	{
		newnd->sprev = NULL;
		newnd->snext = NULL;
		ht->shead = newnd;
		ht->stail = newnd;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newnd->sprev = NULL;
		newnd->snext = ht->shead;
		ht->shead->sprev = newnd;
		ht->shead = newnd;
	}
	else
	{
		tempnd = ht->shead;
		while (tempnd->snext != NULL && strcmp(tempnd->snext->key, key) < 0)
			tempnd = tempnd->snext;
		newnd->sprev = tempnd;
		newnd->snext = tempnd->snext;
		if (tempnd->snext == NULL)
			ht->stail = newnd;
		else
			tempnd->snext->sprev = newnd;
		tempnd->snext = newnd;
	}
	return (1);
}

/**
 * shash_table_get - Obtaining value associated with a key
 * @ht: pointer
 * @key: key of the value to be retrieved
 * Return: value associated with the element or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *currentnd;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);
	currentnd = ht->shead;
	while (currentnd != NULL && strcmp(currentnd->key, key) != 0)
		currentnd = currentnd->snext;
	return ((currentnd == NULL) ? NULL : currentnd->value);
}

/**
 * shash_table_print - Printing a sorted hash table
 * @ht: pointer
 * Return: it is void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *currentnd;

	if (ht == NULL)
		return;
	currentnd = ht->shead;
	printf("{");
	while (currentnd != NULL)
	{
		printf("'%s': '%s'", currentnd->key, currentnd->value);
		currentnd = currentnd->snext;
		if (currentnd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Printing a sorted hash table in reverse
 * @ht: pointer
 * Return: it is void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *currentnd;

	if (ht == NULL)
		return;
	currentnd = ht->stail;
	printf("{");
	while (currentnd != NULL)
	{
		printf("'%s': '%s'", currentnd->key, currentnd->value);
		currentnd = currentnd->sprev;
		if (currentnd != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deleting a sorted hash table
 * @ht: pointer
 * Return: it is void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *topnd = ht;
	shash_node_t *currentnd;
	shash_node_t *tempnd;

	if (ht == NULL)
		return;
	currentnd = ht->shead;
	while (currentnd)
	{
		tempnd = currentnd->snext;
		free(currentnd->key);
		free(currentnd->value);
		free(currentnd);
		currentnd = tempnd;
	}
	free(topnd->array);
	free(topnd);
}
