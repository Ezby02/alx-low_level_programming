#include "list.h"
/**
 * list_len - find number of elements in linked list
 * @h: pointer to start of linked list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
