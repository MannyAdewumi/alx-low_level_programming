#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Structure definitions */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
	struct hash_node_s *prev;
	struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
	hash_node_t *head;
	hash_node_t *tail;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
