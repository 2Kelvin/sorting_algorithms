#include "sort.h"

/**
 * insertion_sort_list - arrange elementts like a Cards game
 *
 * Description: compare element with all its prevNode numbers
 * place it on the left if it's smaller than any other number
 * and to the right if it's larger than any other number
 *
 * @list: pointer to a doubly linked list
 * Return: nothing (void)
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *curNode, *prevNode;

	if (!list || !*list || !((*list)->next))
		return;

	curNode = *list;

	while (curNode != NULL)
	{
		while (curNode->prev && curNode->n < curNode->prev->n)
		{
			curNode->prev->next = curNode->next;
			prevNode = curNode->prev;
			if (curNode->next != NULL)
				curNode->next->prev = prevNode;
			if (prevNode->prev != NULL)
				prevNode->prev->next = curNode;
			else
				*list = curNode;
			prevNode->next = curNode->next;
			curNode->prev = prevNode->prev;
			curNode->next = prevNode;
			prevNode->prev = curNode;
			print_list(*list);
		}
		curNode = curNode->next;
	}
}
