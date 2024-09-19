#include "lists.h"
/**
 * sum_dlistint - function to sum all data in list
 * @head: pointer to head of list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
