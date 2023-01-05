#include "hash_tables.h"

/**
 * key_index - A function that give the index of a key
 *
 * @key: A Key to find the index
 * @size: The size of the array
 *
 * Return: The index at which the key pair
 *
 * Description: the function use hash_djb2 fumction
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
