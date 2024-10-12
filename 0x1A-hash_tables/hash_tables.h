#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node_s - node of a hash table
 * @key: the key string
 * @value: value of corresponding key
 * @next: pointer to next node
 */

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - data structure for each table
 * @size: size of the array
 * @array: array of size n
 */

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);


/**
 * struct shash_node_s - node of a sorted hash table
 * @key: the key string
 * @value: corresponding key value
 * @sprev: pointer to previous element of sorted list
 * @snext: pointer to next element of sorted list
 * @next: pointer to next node of list
 */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} hash_node_t;

/**
 * struct shash_table_s - sorted hash table data struct
 * @size: size of array
 * @array: an array of size n
 * @shead: pointer to the first element of sorted list
 * @stail: pointer to the last element of sorted list
 * 
 * */

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} hash_table_t;

/* Function prototypes */
shash_table_t *shash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
