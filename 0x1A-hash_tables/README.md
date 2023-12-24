0x1A-hash_tables

Task >>>ht = {}
Write a function that creates a hash table.
	Prototype: hash_table_t *hash_table_create(unsigned long int size);
	where size is the size of the array

Task 1. djb2
Write a hash function implementing the djb2 algorithm.
>>>Prototype: unsigned long int hash_djb2(const unsigned char *str);


Task 2. key -> index
Write a function that gives you the index of a key.
>Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
>>>where key is the key
>>>and size is the size of the array of the hash table


Task 3. >>> ht['betty'] = 'cool'

Write a function that adds an element to the hash table.
Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
	Where ht is the hash table you want to add or update the key/value to
	key is the key. key can not be an empty string
	and value is the value associated with the key. value must be duplicated. value can be an empty string
	Returns: 1 if it succeeded, 0 otherwise
