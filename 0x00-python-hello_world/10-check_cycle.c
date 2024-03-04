#include "lists.h"

/**
 * check_cycle - Checks if a linked list has a cycle.
 * @list: Pointer to the head of the linked list.
 *
 * Return: 1 if a cycle exists, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
