#include "functions.h"

/**
* free_list - function that frees a list_t list.
* @head : pointer
*/

void free_list(token_t *head)
{
	token_t *liber, *temp;

	liber = head;
	while (liber)
	{
		temp = liber->next;
		free(liber->str);
		free(liber);
		liber = temp;
	}
}
