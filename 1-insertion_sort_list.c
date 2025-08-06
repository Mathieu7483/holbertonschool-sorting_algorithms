#include "sort.h"
/**
*insertion_sort_list - function that sorts a doubly linked list
*of integers in ascending order using the Insertion sort algorithm
*in ascending order using the Bubble sort algorithm
*@list: double pointer to the list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

current = (*list)->next;
while (current != NULL)
{
	temp = current;
	while (temp->prev && temp->n < temp->prev->n)
	{
		listint_t *prev = temp->prev;

		prev->next = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = prev;
		}
		temp->prev = prev->prev;
		temp->next = prev;

		if (prev->prev != NULL)
		{
			prev->prev->next = temp;
		}
		else
		{
			*list = temp;
		}
		prev->prev = temp;

		print_list(*list);
	}
	current = current->next;
	}
}
