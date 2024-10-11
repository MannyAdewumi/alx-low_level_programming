#include "hash_tables.h"

/**
 * create_hash_table - Creates a hash table.
 * @size: Size of the array.
 *
 * Return: Pointer to the newly created hash table, or NULL if it fails.
 */

hash_table_t *create_hash_table(unsigned long int size)
{
	hash_table_t *create_table;
	unsigned long int i;

	create_table = malloc(sizeof(hash_table_t));

	if (create_table == NULL)
		return (NULL);

	create_table->size = size;

	create_table->array = malloc(size * sizeof(hash_node_t *));

	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		create_table->array[i] = NULL;

	return (create_table);
}
