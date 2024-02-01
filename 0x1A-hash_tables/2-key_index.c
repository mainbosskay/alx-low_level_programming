#include "hash_tables.h"

/**
 * key_index - Obtaining index associated with a given key in a hash table
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: Calculated index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hvalue = hash_djb2(key);
	unsigned long int indx = hvalue % size;

	return (indx);
}
