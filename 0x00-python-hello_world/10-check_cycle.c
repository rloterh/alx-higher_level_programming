#include "lists.h"
#include <stdio.h>

int check_cycle(listint_t *list)
{
	const listint_t *t, *h;

	t = list;
	h = list;

	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
			return (1);
	}
	return (0);
}
