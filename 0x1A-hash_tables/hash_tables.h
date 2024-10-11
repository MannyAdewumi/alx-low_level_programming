#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/* Structure definitions */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *create_hash_table(unsigned long int size);

#endif /* HASH_TABLES_H */
