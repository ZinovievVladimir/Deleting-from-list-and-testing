#include "TList.h"

void Add(TDigits** list, int a) {
	if ((*list) == 0) {
		(*list) = new TDigits;
		(*list)->a = a;
		(*list)->next = 0;
	}
	else
	{
		TDigits* m = *list;
		while (m->next != 0)
			m = m->next;
		TDigits *newl = new TDigits;
		newl->a = a;
		newl->next = 0;
		m->next = newl;
	}
}