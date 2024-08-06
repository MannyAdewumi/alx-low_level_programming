#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ta, *ha;
	size_t nodez = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ta = head->next;
	ha = (head->next)->next;

	while (ha)
	{
		if (ta == ha)
		{
			ta = head;
			while (ta != ha)
			{
				nodes++;
				ta = ta->next;
				ha = ha->next;
			}

			ta = ta->next;

			while (ta != ha)
			{
				nodez++;
				ta = ta->next;
			}
			return (nodez);
		}

		ta = ta->next;
		ha = (ha->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodez, index = 0;

	nodez = looped_listint_len(head);
	if (nodez == 0)
	{
		for (; head != NULL; nodez++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodez; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodez);
}

