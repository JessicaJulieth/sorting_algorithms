#include "sort.h"

/**
 * insertion_sort_list - sort the array of elements from linked list
 * @list: List
 *
 * Return: none
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *Value = NULL;
	listint_t *temp = NULL;

	if (!(list) || !(*list) || !(*list)->next)
		return;

	for (Value = (*list)->next; Value != NULL; Value = Value->next)
	{
		temp = Value->prev;
		while (temp && temp->n > Value->n)
		{
			temp->next = Value->next;
			if (Value->next)
				Value->next->prev = temp;
			Value->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = Value;
			else
				*list = Value;
			Value->next = temp;
			temp->prev = Value;
			temp = Value->prev;
			print_list(*list);
		}
	}
}
