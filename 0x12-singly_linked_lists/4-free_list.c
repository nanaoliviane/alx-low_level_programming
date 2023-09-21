#include "lists.h"

/**
  * free_list - frees the allocated memory
  *@head: head node
  */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
