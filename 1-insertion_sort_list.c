#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: a listint_t head poiter
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *right = *list;
	listint_t *left;
	listint_t *insert;
	int current_n;

	right = right->next;
	while (right != NULL)
	{
		current_n = right->n;
		left = right->prev;
		while (left != NULL && current_n < left->n)
		{
			left = left->prev;
		}
		insert = right;
		insert->prev->next = insert->next;
		insert->next->prev = insert->prev;

		insert->prev = left;
		insert->next = left->next;

		left->next = insert;
		left->next->prev = insert;
		right = right->next;
	}


}
