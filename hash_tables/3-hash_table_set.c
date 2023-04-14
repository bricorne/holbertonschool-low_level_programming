#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
/**	unsigned long int hash_value;
	int bucket_index;
*/
	if (!ht || !key || !value || key[0] == '\0')
		return (0);
	/**hash_value = hash(key);
	bucket_index = hash_value % ht->size;
*/
	 new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	 if (new_node == NULL)
		 return 0;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (1);
}
